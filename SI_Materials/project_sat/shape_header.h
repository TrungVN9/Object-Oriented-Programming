class Shape{
    private:
        int length;
        int width;
        int height;
        int base;
    public:
        void let_set_length(int l =0);
        void let_set_width(int w = 0);
        void let_set_height(int h = 0);
        void let_set_base(int b = 0);
        int let_get_length();
        int let_get_width();
        int let_get_height();
        int let_get_base();
};
class Rectangle : public Shape{
    public:
        void display_shape();
};