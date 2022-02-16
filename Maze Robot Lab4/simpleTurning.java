/**
 * 
 */
package de.tuhh.diss.lab4;

import lejos.hardware.motor.EV3LargeRegulatedMotor;
import lejos.hardware.port.MotorPort;
import lejos.utility.Delay;

public class simpleTurning implements Turner{
	
	private EV3LargeRegulatedMotor rightMotor = new EV3LargeRegulatedMotor(MotorPort.C);
	private EV3LargeRegulatedMotor leftMotor = new EV3LargeRegulatedMotor(MotorPort.B);
	
	private double motorRadius = ((56/2)+95)/2;
	private double wheelRadius = 55/2;
	private int angularVelocity  = 100;
	
	public void setSpeed(int degreesPerSecond) {
		
		angularVelocity = degreesPerSecond;
		double DegreestoRadian = degreesPerSecond*(3.14/180);
		double Velocity = DegreestoRadian*motorRadius;
		double Omega_Wheel = Velocity/wheelRadius;
		double Omega_Motor_Radians = 3*Omega_Wheel;
		double Omega_Motor_Degrees = Omega_Motor_Radians*(180/3.14);
		
		rightMotor.setSpeed((int)(Omega_Motor_Degrees));
		leftMotor.setSpeed((int)(Omega_Motor_Degrees));
	}
		
	public void turn(int degrees) {
		
		double Distance = degrees*motorRadius;
		double Angle = Distance/wheelRadius;
		double Motor_Degrees = 3*Angle;
		
		if (degrees > 0) {	
			
			rightMotor.rotate((int)Motor_Degrees, true);
			leftMotor.rotate(-(int) Motor_Degrees, true);
		}
		else {
			leftMotor.rotate(-(int) Motor_Degrees,true);
			rightMotor.rotate((int) Motor_Degrees, true);
			
			}
			Delay.msDelay(Math.abs(((degrees/(angularVelocity/3))*1000)));
		}
}
