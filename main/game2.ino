void Game2(){
    if( psi < PI/4 && psi > - PI/4 ){  // not falling
        // set psi reference
        psiController.setReference(desirePsi);
        output = -psiController.update(psi, samplingTime);
    
        // set phi reference
        phiController.setReference(desirePhi);
        outputDiff = phiController.update(phi);
    
        // calculate the left, right motor output
        outputL = output + outputDiff;
        outputR = output - outputDiff;
    } else {
        outputL = 0;
        outputR = 0;
    }
}
