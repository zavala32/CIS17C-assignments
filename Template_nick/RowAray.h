#ifndef ROW_H
#define ROW_H
template<class T>
class RowAray{
    protected:
        int size;
        T *rowData;
    public:
        RowAray(int size){
            this->size=size;
            rowData = new T(size);
        }
        virtual ~RowAray(){}
        int getSize()const{return size;}
        T getData(int i)const{
            if(i>=0&&i<size)return rowData[i];
            else return 0;}
         void setData(int,T);
};
#endif 