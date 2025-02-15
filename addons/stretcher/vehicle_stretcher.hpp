class LSV_01_unarmed_base_F;
class B_LSV_01_unarmed_F: LSV_01_unarmed_base_F {
    kat_stretcherPos[] = {0.08,-1.5,-0.69};
    kat_stretcherVector[] = {{1, 0, 0}, {0, 0, 1}};
};
class Heli_Transport_01_base_F;
class B_Heli_Transport_01_F: Heli_Transport_01_base_F {
    kat_stretcherPos[] = {0,1.6,-1.55};
    kat_stretcherVector[] = {{1, 0, 0}, {0, 0, 1}};
};
class B_Truck_01_transport_F;
class B_Truck_01_medical_F: B_Truck_01_transport_F {
    kat_stretcherPos[] = {-0.15,-4.7,0};
    kat_stretcherVector[] = {{1, 0, 0}, {0, 0, 1}};
};
class B_APC_Wheeled_01_base_F;
class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F {
    kat_stretcherPos[] = {0.85,1.7,-0.41};
    kat_stretcherVector[] = {{0,0.78,-0.22},{0,0.22,0.78}};
};
class Heli_Transport_03_base_F;
class B_Heli_Transport_03_F: Heli_Transport_03_base_F {
    kat_stretcherPos[] = {0,-0.4,-2.08};
    kat_stretcherVector[] = {{0, 0, 0}, {0, 0, 0}};
};

class LandVehicle;
class Car: LandVehicle {};
class Car_F: Car {};
class Quadbike_01_base_F: Car_F {
    kat_stretcherPos[] = {0,0.8,-0.56};
    kat_stretcherVector[] = {{1, 0, 0}, {0, 0, 1}};
};
