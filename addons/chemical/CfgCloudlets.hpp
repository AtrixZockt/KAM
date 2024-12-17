class CfgCloudlets {
    class Default;
    class KAT_TripWireGas: Default {
        lifeTime = 0;
        beforeDestroyScript = QPATHTOF(functions\fnc_GasTripEffect.sqf);
    };

    class KAT_CAS_GAS_Explosion_FX_Script: Default {
        lifeTime = 0;
        beforeDestroyScript = QPATHTOF(functions\fnc_CASCreateGas.sqf);
    };

    class KAT_CAS_GAS_Explosion_FX: Default {
        interval = 0.03;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleFSNtieth = 16;
        particleFSIndex = 7;
        particleFSFrameCount = 48;
        particleFSLoop = 1;
        angleVar = 360;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 3;
        moveVelocity[] = {0,2,0};
        rotationVelocity = 0;
        weight = 0.05;
        volume = 0.04;
        rubbing = 0.025;
        size[] = {3,7,10};
        color[] =
        {
            {0.3,0.3,0.3,0},
            {0.3,0.3,0.3,0.2},
            {0.3,0.3,0.3,0.3},
            {0.3,0.3,0.3,0.3},
            {0.3,0.3,0.3,0.3},
            {0.3,0.3,0.3,0.32},
            {0.471, 0.565, 0.064,0.4},
            {0.571, 0.665, 0.084,0.3},
            {0.671, 0.765, 0.184,0.1},
            {0.671, 0.765, 0.184,0}
        };
        animationSpeed[] = {0.5,0.3};
        randomDirectionPeriod = 0.2;
        randomDirectionIntensity = 0.1;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 2.5;
        positionVar[] = {0.2,0.2,0.2};
        moveVelocityVar[] = {1.8,1,1.8};
        rotationVelocityVar = 20;
        sizeVar = 0.3;
        colorVar[] = {0,0,0,0.3};
        randomDirectionPeriodVar = 0.2;
        randomDirectionIntensityVar = 0.05;
        coreIntensity = 0;
        coreDistance = 0;
        damageTime = 0;
        damageType = "";
        angle = 0;
        position[] = {0,0,0};
    };

    class KAT_TOXIC_GAS_PEFFECT: Default {
        interval = 0.01;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleFSNtieth = 16;
        particleFSIndex = 7;
        particleFSFrameCount = 16;
        particleFSLoop = 1;
        angleVar = 1;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 20;
        moveVelocity[] = {0,0,0};
        rotationVelocity = 1;
        weight = 100;
        volume = 1;
        rubbing = 0.01;
        size[] = {0.1,2,0};
        color[] =
        {
            {0.3,0.3,0.3,0},
            {0.4,0.4,0.4,0.2},
            {0.371, 0.465, 0.044,0.3},
            {0.471, 0.565, 0.084,0.2},
            {0.671, 0.765, 0.184,0.1},
            {0.671, 0.765, 0.184,0}
        };
        animationSpeed[] = {0.5,0.3};
        randomDirectionPeriod = 1;
        randomDirectionIntensity = 0.04;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 10;
        positionVar[] = {0,0,0};
        moveVelocityVar[] = {0.5,0,0.5};
        rotationVelocityVar = 10;
        sizeVar = 0;
        colorVar[] = {0,0,0,0.35};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
        coreIntensity = 0;
        coreDistance = 0;
        damageTime = 0;
        damageType = "";
        angle = 0;
        position[] = {0,0,0};
        onSurface = 1;
        surfaceOffset = 0;
        bounceOnSurface = 0;
        ignoreWind = 1;
    };

    class KAT_CAS_GAS_FX: Default {
        interval = 0.03;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleFSNtieth = 16;
        particleFSIndex = 7;
        particleFSFrameCount = 48;
        particleFSLoop = 1;
        angleVar = 360;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 3;
        moveVelocity[] = {1,0,1};
        rotationVelocity = 0;
        weight = 0.05;
        volume = 0.04;
        rubbing = 0.025;
        size[] = {1,3,4};
        color[] =
        {
            {0.3,0.3,0.3,0},
            {0.4,0.4,0.4,0.2},
            {0.371, 0.465, 0.044,0.3},
            {0.471, 0.565, 0.084,0.2},
            {0.671, 0.765, 0.184,0.1},
            {0.671, 0.765, 0.184,0}
        };
        animationSpeed[] = {0.5,0.3};
        randomDirectionPeriod = 0.2;
        randomDirectionIntensity = 0.1;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 2.5;
        positionVar[] = {0,0,0};
        moveVelocityVar[] = {-1,0.5,-1};
        rotationVelocityVar = 20;
        sizeVar = 0.3;
        colorVar[] = {0,0,0,0.3};
        randomDirectionPeriodVar = 0.2;
        randomDirectionIntensityVar = 0.05;
        coreIntensity = 0;
        coreDistance = 0;
        damageTime = 0;
        damageType = "";
        angle = 0;
        position[] = {0,0.2,0};
    };
};

class KAT_TripWireGasEffect {
    class spawnGAS {
        simulation = "particles";
        type = "KAT_TripWireGas";
        position = "explosionPos";
    };
};

class KAT_GAS_ClusterExplosion {
    class ExplosionEffect {
        simulation = "particles";
        type = "KAT_CAS_GAS_Explosion_FX";
        position = "explosionPos";
        lifeTime = 2;
        particleFSLoop = 1;
    };
    class CAS_GAS_Effect {
        simulation = "particles";
        type = "KAT_CAS_GAS_FX";
        position = "explosionPos";
        lifeTime = 240;
        particleFSLoop = 1;
    };
    class GAS_Script {
        simulation = "particles";
        type = "KAT_CAS_GAS_Explosion_FX_Script";
        position = "explosionPos";
    };
};

class KAT_CAS_R_HYDRA_Explosion {
    class CAS_R_GAS_Effect {
        simulation = "particles";
        type = "KAT_CAS_GAS_FX";
        position = "explosionPos";
        lifeTime = 240;
        particleFSLoop = 1;
    };
    class R_GAS_Script {
        simulation = "particles";
        type = "KAT_CAS_GAS_Explosion_FX_Script";
        position = "explosionPos";
    };
};

