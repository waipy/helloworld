class Date2{
    int d,m ,y;
    public:
        static Date2 default_date;
        Date2(int dd=0, int mm=0, int yy=0);

        static void set_default(int, int, int);

        void print();
};