#include <iostream>
using namespace std;

class MasukUniversitas {
    private:
      

 int uangPendaftaran;
  MasukUniversitas (int nilai );
   MasukUniveristas(MasukUniversitas)
   {
    cout << "masukan jumlah uang pendftaran\n" << endl;
   }
public:
 MasukUniversitas() {
 uangPendaftaran = 0;
  // isi nilai default variable yang dibutuhkan di bawah ini
 }
 virtual void namaJalurMasuk() { return; }
  virtual void namajalurmasuk ()
  {
    cout << "masukan nama jalur masuk\n" << endl;
  }
 void setUangPendaftaran(int nilai) {
 this->uangPendaftaran = nilai;
 }
 float getUangPendaftaran() {
 return uangPendaftaran;
 }
 
};
   


class SNBT : public MasukUniversitas {
    public:

    SNBT (int i );
       MasukUniversitas(int i ); 
    {
        cout << "masukan uangpendaftaran,uang semesterpertama,uang bangunan,total biaya\n" << endl;
    }
       

};

class SNBP : public MasukUniversitas {
    public:

    SNBP (int i );
      MasukUniversitas(int i );
    {
        cout << "masukan uangpendaftaran,uang semesterpertama,uang bangunan,total biaya\n" << endl;
    }
       

      
};

int main() {
    MasukUniversitas

    return 0;
 
}