#include <iostream>
using namespace std;

class Bateria{
    private:
    int armazenamento_total;

    public:
    Bateria(int armazenamento_total){
        this->armazenamento_total = armazenamento_total;
    }

    int getArmazenamentoTotal(){
        return armazenamento_total;
    }

    virtual void setLatenciaMedia(int armazenamento_total_passado);
};

class BateriaMoto: public Bateria{
    private:
    int latencia_bateria, latencia_media;

    public:
    BateriaMoto(int armazenamento_total, int latencia_passada) : Bateria(armazenamento_total){
        this->latencia_bateria = latencia_passada;
    }

    void setLatenciaMedia(int armazenamento_total_passado)  override{
        this->latencia_media = (armazenamento_total_passado * this->latencia_bateria) / 2;
    }

};

