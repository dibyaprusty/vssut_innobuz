import serial

c=0
ser = serial.Serial()
ser.baudrate = 9600
ser.port = 'COM4'

while(True):
    ser.open()
    s=ser.read(3)
    st=s.decode('utf-8')
    f=open("Demo1.txt","a")
    f.write(st)
    print(st)
    c=c+1
    if(c==10):
        break
