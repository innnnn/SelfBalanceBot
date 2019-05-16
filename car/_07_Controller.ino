void SetController(){
    motor_A.ClearState();
    motor_B.ClearState();
    
    switch( (int)data[1] ){
        case 1:
            motor_A.SetControlMode(1);
            motor_A.SetPsiController(data[2], data[3], data[4], data[5]);
            motor_B.SetControlMode(1);
            motor_B.SetPsiController(data[2], data[3], data[4], data[5]);
            break;
        case 2:
            motor_A.SetControlMode(2);
            motor_A.SetPsiController(data[2], data[3], data[4], data[5]);
            motor_A.SetThetaController(data[6], data[7], data[8], data[9]);
            motor_B.SetControlMode(2);
            motor_B.SetPsiController(data[2], data[3], data[4], data[5]);
            motor_B.SetThetaController(data[6], data[7], data[8], data[9]);
            break;
        case 3:
            motor_A.SetControlMode(3);
            motor_A.SetStateFeedbackController(data[2], data[3], data[4], data[5]);
            motor_B.SetControlMode(3);
            motor_B.SetStateFeedbackController(data[2], data[3], data[4], data[5]);
            break;
    }
}