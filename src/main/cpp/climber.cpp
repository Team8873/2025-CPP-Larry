#pragma once
//write climber code from 2025 in c++ from java

//helpful links
//https://github.wpilib.org/allwpilib/docs/release/cpp/_subsystem_base_8h.html
//https://codedocs.revrobotics.com/cpp/classrev_1_1spark_1_1_spark_max.html
//https://docs.wpilib.org/en/2020/docs/software/commandbased/subsystems.html
//https://www.codecademy.com/resources/cheatsheets/language/c-plus-plus

#include <frc2/command/CommandPtr.h>
#include <frc2/command/SubsystemBase.h>

#include <frc/motorcontrol/PWMMotorController.h>

//#include <SparkBase.h>
//#include <SparkMax.h> these 2 had errors, find vendor libary
class climberCpp : public frc2::SubsystemBase {};