#include "main.h"

/////
// For installation, upgrading, documentations, and tutorials, check out our website!
// https://ez-robotics.github.io/EZ-Template/
/////

// These are out of 127
const int DRIVE_SPEED = 110;
const int TURN_SPEED = 90;
const int SWING_SPEED = 90;
const int INTAKE_SPEED = 127;

///
// Constants
///
void default_constants() {
  chassis.pid_heading_constants_set(11, 0, 20);
  chassis.pid_drive_constants_set(20, 0, 100);
  chassis.pid_turn_constants_set(3, 0.05, 20, 15);
  chassis.pid_swing_constants_set(6, 0, 65);

  chassis.pid_turn_exit_condition_set(80_ms, 3_deg, 250_ms, 7_deg, 500_ms, 500_ms);
  chassis.pid_swing_exit_condition_set(80_ms, 3_deg, 250_ms, 7_deg, 500_ms, 500_ms);
  chassis.pid_drive_exit_condition_set(80_ms, 1_in, 250_ms, 3_in, 500_ms, 500_ms);

  chassis.pid_turn_chain_constant_set(3_deg);
  chassis.pid_swing_chain_constant_set(5_deg);
  chassis.pid_drive_chain_constant_set(3_in);

  chassis.slew_drive_constants_set(7_in, 80);
}


void auton_blue() {
  mogo.set(false);

  chassis.pid_turn_relative_set(-24_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(-69_in, DRIVE_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(-12_in, 25);
  chassis.pid_wait();

  mogo.set(true);

  chassis.pid_turn_relative_set(26_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(28_in, 70);
  chassis.pid_wait();

  intake.move_velocity(-INTAKE_SPEED);

  chassis.pid_drive_set(12_in, 30);
  chassis.pid_wait();

  pros::delay(2000);

  intake.move_velocity(0);

  chassis.pid_turn_relative_set(-67_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(70_in, 70);
  chassis.pid_wait();

  chassis.pid_drive_set(-3_in, 25);
  chassis.pid_wait();

  chassis.pid_turn_relative_set(-105_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(60_in, DRIVE_SPEED);
  chassis.pid_wait();

}

void auton_red() {
  mogo.set(false);

  chassis.pid_turn_relative_set(24_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(-69_in, DRIVE_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(-12_in, 25);
  chassis.pid_wait();

  mogo.set(true);

  chassis.pid_turn_relative_set(-26_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(28_in, 70);
  chassis.pid_wait();

  intake.move_velocity(-INTAKE_SPEED);

  chassis.pid_drive_set(12_in, 30);
  chassis.pid_wait();

  pros::delay(2000);

  intake.move_velocity(0);

  chassis.pid_turn_relative_set(67_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(70_in, 70);
  chassis.pid_wait();

  chassis.pid_drive_set(-3_in, 25);
  chassis.pid_wait();

  chassis.pid_turn_relative_set(105_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(60_in, DRIVE_SPEED);
  chassis.pid_wait();

}

void auton_3() {
  chassis.pid_drive_set(3_in, 20);
  chassis.pid_wait();
}

