/**
 * 
 */
package de.tuhh.diss.lab4;
import lejos.hardware.lcd.LCD;
import lejos.hardware.motor.EV3LargeRegulatedMotor;
import lejos.hardware.port.MotorPort;
import lejos.hardware.port.SensorPort;
import lejos.hardware.sensor.EV3GyroSensor;
import lejos.robotics.SampleProvider;

public class Gyro implements Turner {
	
	
	private EV3LargeRegulatedMotor rightMotor = new EV3LargeRegulatedMotor(MotorPort.C);
	private EV3LargeRegulatedMotor leftMotor = new EV3LargeRegulatedMotor(MotorPort.B);
	private EV3GyroSensor sensor = new EV3GyroSensor(SensorPort.S3);
	private int motorSpeed = 100;
	
	public void turn(int degrees) {
		
		SampleProvider Angle = sensor.getAngleMode();
		float[] angle = new float[Angle.sampleSize()];
		rightMotor.setSpeed(motorSpeed);
		leftMotor.setSpeed(motorSpeed);
		
		while(degrees>angle[0]) {
			rightMotor.backward();
			leftMotor.forward();
			Angle.fetchSample(angle, 0);
			LCD.drawString(" Angle "+ angle[0], 1,1);
		}
		
		while(degrees<angle[0]) {
			rightMotor.forward();
			leftMotor.backward();	
			Angle.fetchSample(angle, 0);
			LCD.drawString(" Angle "+ angle[0], 1,1);
		}
		rightMotor.setSpeed(0);
		leftMotor.setSpeed(0);
}
	
	public void setSpeed(int degreesPerSecond) {
		motorSpeed = degreesPerSecond;
		
	}
	
}