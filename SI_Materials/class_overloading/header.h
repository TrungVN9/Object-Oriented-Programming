class Rectangle{
    private:
    //Data members
        int length;
        int width;
    public: //ACCESS SPECIFIERS
        Rectangle(int l = 0, int w = 0){
            length = l;
            width = w;
        }
    //Function members
        int area(){
            return length* width;
        }
};
