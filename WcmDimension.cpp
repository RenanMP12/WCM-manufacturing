#include <iostream>
#include <iomanip>

int main()
{
    // Part dimension
    int columnWidth = 30;
    double PartLength = 550.0; // mm
    double PartWidth = 260.0; // mm
    double PartThickness = 2.5; // mm
    double PartVolume = PartLength * PartWidth * PartThickness * 0.001; // ml
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::left;
    std::cout << std::setfill('-') << std::setw(50) << "Part Dimensions " << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::setw(columnWidth) << "Part Length: " << PartLength << " mm" << std::endl;
    std::cout << std::setw(columnWidth) << "Part Width: " << PartWidth << " mm" << std::endl;
    std::cout << std::setw(columnWidth) << "Part Thickness: " << PartThickness << " mm" << std::endl;
    std::cout << std::setw(columnWidth) << "Part Volume: " << PartVolume << " ml" << std::endl;

    // Resin dimension
    double fvf = 0.55; // fiber volume fraction
    double resinVolume = PartVolume * (1 - fvf); // ml
    std::cout << std::endl;
    std::cout << std::setfill('-') << std::setw(50) << "Resin description " << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::setw(columnWidth) << "Resin Volume: " << resinVolume << " ml" << std::endl;

    // Resin description
    const double resinRatio = 100.0; // resin ratio
    const double hardenerRatio = 29; // hardener ratio
    const double additiveRatio = 1.7; // additive ratio
    const double resinDensity = 1.19; // g/cm^3
    const double hardenerDensity = 0.97; // g/cm^3
    const double additiveDensity = 1.05; // g/cm^3
    std::cout << std::setw(columnWidth) << "Resin amount: " << resinRatio*resinVolume/(resinRatio + hardenerRatio + additiveRatio) << " ml" << " or " << resinRatio*resinVolume/(resinRatio + hardenerRatio + additiveRatio)*resinDensity << " g" << std::endl;
    std::cout << std::setw(columnWidth) << "Hardener amount: " << hardenerRatio*resinVolume/(resinRatio + hardenerRatio + additiveRatio) << " ml"  << " or " << hardenerRatio*resinVolume/(resinRatio + hardenerRatio + additiveRatio)*hardenerDensity << " g" << std::endl;
    std::cout << std::setw(columnWidth) << "Additive amount: " << additiveRatio*resinVolume/(resinRatio + hardenerRatio + additiveRatio) << " ml" << " or " << additiveRatio*resinVolume/(resinRatio + hardenerRatio + additiveRatio)*additiveDensity << " g" << std::endl;

    // Resin amount - manual mixing 
    resinVolume *= 1.1; // 10% extra for manual mixing
    std::cout << std::endl;
    std::cout << std::setfill('-') << std::setw(50) <<  "Additional resin for manual mixing (10%) " << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::setw(columnWidth) << "Resin amount (manual mixing): " << resinVolume << " ml" << std::endl << std::flush;
    std::cout << std::setw(columnWidth) << "Resin amount: " << resinRatio*resinVolume/(resinRatio + hardenerRatio + additiveRatio) << " ml" << " or " << resinRatio*resinVolume/(resinRatio + hardenerRatio + additiveRatio)*resinDensity << " g" << std::endl;
    std::cout << std::setw(columnWidth) << "Hardener amount: " << hardenerRatio*resinVolume/(resinRatio + hardenerRatio + additiveRatio) << " ml"  << " or " << hardenerRatio*resinVolume/(resinRatio + hardenerRatio + additiveRatio)*hardenerDensity << " g" << std::endl;
    std::cout << std::setw(columnWidth) << "Additive amount: " << additiveRatio*resinVolume/(resinRatio + hardenerRatio + additiveRatio) << " ml" << " or " << additiveRatio*resinVolume/(resinRatio + hardenerRatio + additiveRatio)*additiveDensity << " g" << std::endl;

    // Pressure calculation
    double pressure = 20; // bar
    double pressurePsi = pressure * 14.5038; // psi
    double areaIn = PartLength * PartWidth * 0.00155; // in^2
    double force = pressurePsi * areaIn/1e3; // lbf
    std::cout << std::endl;
    std::cout << std::setfill('-') << std::setw(50) << "Pressure calculation" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::setw(columnWidth) << "Force: " << force << " lbf (tons)" << std::endl;
    
    return 0; // return statement
}