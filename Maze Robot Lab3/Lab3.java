/**
 * 
 */
package de.tuhh.diss.lab3;

import lejos.hardware.motor.EV3LargeRegulatedMotor;
import lejos.hardware.port.MotorPort;
import lejos.hardware.sensor.EV3UltrasonicSensor;
import lejos.hardware.sensor.EV3ColorSensor;
import lejos.hardware.port.SensorPort;
import lejos.hardware.sensor.SensorMode;
import lejos.hardware.Button;
import lejos.hardware.lcd.LCD;
import lejos.robotics.SampleProvider;
import lejos.utility.Delay;

public class Lab3 {
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		//Task3.3
		
		// Calling the EV3 Motor to set the desired speed of the right and left motor
		
		EV3LargeRegulatedMotor RightMotor = new EV3LargeRegulatedMotor(MotorPort.C);
		EV3LargeRegulatedMotor LeftMotor = new EV3LargeRegulatedMotor(MotorPort.B);
		RightMotor.setSpeed(200);
		LeftMotor.setSpeed(200);
		RightMotor.backward();
		LeftMotor.backward();
		
		// Calling the Ultrasonic sensor to measure the distance to an object in front of the sensor
		
		EV3UltrasonicSensor DistSens = new EV3UltrasonicSensor(SensorPort.S4);
		SampleProvider Dist = DistSens.getDistanceMode();
		float[] Distance = new float[Dist.sampleSize()];
		
		// Calling the Color sensor to distinguish between different colors
		
		EV3ColorSensor ColSens = new EV3ColorSensor(SensorPort.S1);
		SensorMode colorId = ColSens.getColorIDMode();
		float[] Color = new float[colorId.sampleSize()];
		
		// Using while-loop to provide Color and Distance spontaneously while the robot is moving
		
		while(Button.ESCAPE.isUp()) {
			Dist.fetchSample(Distance, 0);
			colorId.fetchSample(Color, 0);
			switch ((int)Color[0]) {
				case 0: 
					Menu("Red", Distance);
					RightMotor.setSpeed(0);
					LeftMotor.setSpeed(0);
					break;
				case 1:
					Menu("Green", Distance);
					RightMotor.setSpeed(0);
					LeftMotor.setSpeed(0);				
					break;
				case 2:
					Menu("Blue", Distance);
					RightMotor.setSpeed(0);
					LeftMotor.setSpeed(0);
					break;
				case 3:
					Menu("Yellow", Distance);
					RightMotor.setSpeed(0);
					LeftMotor.setSpeed(0);
					break;
			
				case 4:
					Menu("Magenta", Distance);
					RightMotor.setSpeed(0);
					LeftMotor.setSpeed(0);
					break;
				case 5:
					Menu("Orange", Distance);
					RightMotor.setSpeed(0);
					LeftMotor.setSpeed(0);
					break;
				case 6:
					Menu("White", Distance);
					RightMotor.setSpeed(0);
					LeftMotor.setSpeed(0);
					break;
				case 7:
					Menu("Black", Distance);
					RightMotor.setSpeed(0);
					LeftMotor.setSpeed(0);
					break;
				case 8:
					Menu("Pink", Distance);
					RightMotor.setSpeed(0);
					LeftMotor.setSpeed(0);
					break;
				case 9:
					Menu("Gray", Distance);
					RightMotor.setSpeed(0);
					LeftMotor.setSpeed(0);
					break;
				
				case 10:
					Menu("Light_Gray", Distance);
					RightMotor.setSpeed(0);
					LeftMotor.setSpeed(0);
					break;
					
				case 11:
					Menu("Dark_Gray", Distance);
					RightMotor.setSpeed(0);
					LeftMotor.setSpeed(0);
					break;
					
				case 12:
					Menu("Cyan", Distance);
					RightMotor.setSpeed(0);
					LeftMotor.setSpeed(0);
					break;
					
				case 13:
					Menu("Brown", Distance);
					RightMotor.setSpeed(0);
					LeftMotor.setSpeed(0);
					break;
					
				default:
					Menu("None", Distance);
					break;
			}
		}
	}
	public static void Menu(String Col, float[] Dis) {
		LCD.clear();
		LCD.drawString(Col, 0, 1);
		LCD.drawString("distance: " + Dis[0], 0,2);
		Delay.msDelay(100);
	}
}