void voltage()

{

float temp;

val11=analogRead(A1);

temp=val11/4.092;

val11=(int)temp;

val2=val11/10;


delay(1000);

}
