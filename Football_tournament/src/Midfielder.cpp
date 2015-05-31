#ifndef MIDFIELDER_H_INCLUDED
#define MIDFIELDER_H_INCLUDED

class Midfielder: public Player{
private:
    int accuracy;
    int strength;
    int willingnessToPass;
public:
    void setAccuracy(int acc) {accuracy=acc;};
    void setStrenght(int s) {strength=s;};
    void setWillToPass(int p) {willingnessToPass=w;};
    int getAccuracy() const {return accuracy};
    int getStrenght() const {return strength;};
    int getWillToPass() const {return willingnessToPass;};

    void run();
    void shoot();
};

#endif // MIDFIELDER_H_INCLUDED
