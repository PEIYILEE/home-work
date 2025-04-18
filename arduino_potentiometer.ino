// 定義引腳
const int potPin = A0; // 電位器接到模擬輸入 A0
const int ledPin = 9;  // LED 接到數字輸出 9 (PWM)

void setup() {
  // 初始化 LED 引腳為輸出模式
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // 讀取電位器的值 (範圍 0 到 1023)
  int potValue = analogRead(potPin);

  // 將電位器的值映射到 PWM 範圍 (0 到 255)
  int brightness = map(potValue, 0, 1023, 0, 255);

  // 設置 LED 的亮度
  analogWrite(ledPin, brightness);

  // 短暫延遲以穩定輸出
  delay(10);
}
