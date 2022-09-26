// A class for timing algorithms
// Usage: timer<std::chrono::milliseconds> my_timer;
//        my_timer.start();
//        // run an algorithm
//        my_timer.stop();
//        std::cout << "Time elapsed: "
//                  << my_timer.count() << " milliseconds.\n";
#include <chrono>

template <typename units>
class timer {
public:
  void start();
  void stop();
  auto count() const;
private:
  std::chrono::steady_clock::time_point start_time, stop_time;
  enum {RUNNING, STOPPED} state = STOPPED;
};

template <typename units>
void timer<units>::start()
{
    start_time = std::chrono::steady_clock::now();
    state = RUNNING;
}

template <typename units>
void timer<units>::stop()
{
  if (state == RUNNING) {
    stop_time = std::chrono::steady_clock::now();
    state = STOPPED;
  }
  else if (state == STOPPED) return;
}

template <typename units>
auto timer<units>::count() const
{
  decltype(stop_time) end_time; // declare end_time with same type as stop_time
  if (state == STOPPED) {
    end_time = stop_time;
  }
  else if (state == RUNNING) {
    end_time = std::chrono::steady_clock::now();
  }
  auto diff = std::chrono::duration_cast<units>(end_time-start_time);
  return diff.count();
}