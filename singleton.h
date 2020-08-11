#ifndef SINGLETONE
#define SINGLETONE

template <class T, class MostDerived = T>
class  Singletone
{
    // запреты на копирование и перемещение объекта
    Singletone( const Singletone & )      = delete;     // copy ctor
    Singletone( Singletone && )           = delete;     // moving ctor
    Singletone &operator= ( const Singletone & ) = delete; // copy assignment
    Singletone &operator= ( Singletone && ) = delete;   // moving assignment
public:
    static MostDerived *instance()
    {
        try
        {
            static MostDerived object;
            return &object;
        }
        catch ( ... )
        {
            //CException( __PRETTY_FUNCTION__ ).write();
        }
        return 0;
    }
    virtual ~Singletone() { }
protected:
    Singletone() {}
};
#endif // SINGLETONE
