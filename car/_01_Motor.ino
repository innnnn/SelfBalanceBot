void SetupMotor(){
/*-- pin setup ------------------------------------------------------------------*/
// If batterys are at backward & user see the car from the backward
// motor A(right motor) connected between A01 and A02
// motor B(left motor) connected between B01 and B02
    const int PWMA = 5, PWMB = 9;               // Speed control 
    const int AIN1 = 6, BIN1 = 11;              // Direction +
    const int AIN2 = 4, BIN2 = 10;              // Direction -
    const int STBY = 7;                         // standby(停止)

    motor_A.SetMotorPins(PWMA, AIN1, AIN2, STBY);
    motor_B.SetMotorPins(PWMB, BIN1, BIN2, STBY);
}