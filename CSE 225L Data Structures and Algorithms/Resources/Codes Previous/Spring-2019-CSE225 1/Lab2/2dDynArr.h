#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class dynArr {
private:
    int  ** data ;
    int row,column ;
public:
    dynArr () ;
    dynArr (int , int ) ;
    ~dynArr () ;
    void setValue(int , int , int ) ;
    int getValue (int , int ) ;
};
#endif // 2DDYNARR_H_INCLUDED
