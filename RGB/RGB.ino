// กำหนดพอร์ตสำหรับ LED
const int LED_PIN = 9;  // ขา LED ต่อกับพอร์ต 9
const int GREEN_PIN = 10;  // ขา LED ต่อกับพอร์ต 9
const int BLUE_PIN = 11;  // ขา LED ต่อกับพอร์ต 9

void setup() {
  // กำหนดพอร์ตให้เป็น OUTPUT
  pinMode(LED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, LOW);   // ตั้งค่าให้ LED ดับ
  delay(1000);   
  digitalWrite(LED_PIN, HIGH);  // ตั้งค่าให้ LED ติด
  delay(500);                  // หน่วงเวลา 1 วินาที (1000 มิลลิวินาที)

  digitalWrite(GREEN_PIN, LOW);   // ตั้งค่าให้ LED ดับ
  delay(1000);   
  digitalWrite(GREEN_PIN, HIGH);  // ตั้งค่าให้ LED ติด
  delay(500);                  // หน่วงเวลา 1 วินาที (1000 มิลลิวินาที)

  digitalWrite(BLUE_PIN, LOW);   // ตั้งค่าให้ LED ดับ
  delay(1000);   
  digitalWrite(BLUE_PIN, HIGH);  // ตั้งค่าให้ LED ติด
  delay(500);                  // หน่วงเวลา 1 วินาที (1000 มิลลิวินาที)

  digitalWrite(LED_PIN, LOW);   // แดงเขียว
  digitalWrite(GREEN_PIN, LOW);
  delay(1000);   
  digitalWrite(LED_PIN, HIGH);  // ตั้งค่าให้ LED ติด
  digitalWrite(GREEN_PIN, HIGH);
  delay(500);                  // หน่วงเวลา 1 วินาที (1000 มิลลิวินาที)

  digitalWrite(GREEN_PIN, LOW);   // เขียวน้ำเงิน
  digitalWrite(BLUE_PIN, LOW); 
  delay(1000);   
  digitalWrite(GREEN_PIN, HIGH);  // ตั้งค่าให้ LED ติด
  digitalWrite(BLUE_PIN, HIGH);
  delay(500);                  // หน่วงเวลา 1 วินาที (1000 มิลลิวินาที)

  digitalWrite(BLUE_PIN, LOW);   // น้ำเงินแดง
  digitalWrite(LED_PIN, LOW);
  delay(1000);   
  digitalWrite(BLUE_PIN, HIGH);  // ตั้งค่าให้ LED ดับ
  digitalWrite(LED_PIN, HIGH);
  delay(500);                  // หน่วงเวลา 1 วินาที (1000 มิลลิวินาที)

  digitalWrite(BLUE_PIN, LOW);   // ขาว
  digitalWrite(LED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  delay(1000);   
  digitalWrite(BLUE_PIN, HIGH);  // ตั้งค่าให้ LED ดับ
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  delay(500);                  // หน่วงเวลา 1 วินาที (1000 มิลลิวินาที)
}
