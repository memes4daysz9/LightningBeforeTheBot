#include "main.h"

class Bot{
    public:
    int RDeg;
    int LDeg;
    double LTar;
    double RTar;
    double Dis;
    double LDis;
    double RDis;
    double error;
    bool PurePursuit;
    double Heading;
    Bot();
    void RelativeForward(float Distance);
    void RelativeRotate(float Deg);
    void RelativeHardStop(float Distance);
    void RelativeCurve(int[1] p1,int[1] p2);
    void AbsoluteForward(int x,int y);
    void AbsoluteRotate(float Deg);
    void AbsoluteHardStop(int x, int y);
    void AbsoluteCurve(int[1] p1,int[1] p2, int[1] p3);

};

class Lambda{
    public:
    bool status;
    Lambda();
    void Activate();//Lambda.Activate();
    void Deactivate();//Lambda.DeActivate();
};

class Conveyor{
    public:
    bool Climbing;
    bool Intaking;
    Conveyor();
    void Climb();//Conveyor.Climb();
    void Intake();//Conveyor.Intake();
};