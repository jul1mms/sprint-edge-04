#include <DHT.h>

#define DHTPIN 7  // Define o pino ao qual o sensor DHT11 está conectado
#define DHTTYPE DHT11  // Especifica o tipo de sensor (DHT11)

#define LED_VERDE 8
#define LED_AMARELO 9
#define LED_VERMELHO 10

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
}

void loop() {
  delay(2000);  // Espere 2 segundos entre as leituras

  float temperatura = dht.readTemperature();
  float umidade = dht.readHumidity();

  if (isnan(temperatura) || isnan(umidade)) {
    Serial.println("Falha ao ler o sensor DHT!");
  } else {
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.print("Umidade: ");
    Serial.print(umidade);

    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, LOW);

    if (temperatura >= 23 && temperatura <= 26 && umidade >= 50 && umidade <= 60) {
      digitalWrite(LED_VERDE, HIGH);  // Temperatura e umidade ideais, acenda o LED verde
    }

    if (temperatura < 23 || temperatura > 26) {
      digitalWrite(LED_AMARELO, HIGH);  // Temperatura fora do ideal, acenda o LED amarelo
    }

    if (umidade < 50 || umidade > 60) {
      digitalWrite(LED_VERMELHO, HIGH);  // Umidade fora do ideal, acenda o LED vermelho
    }
  }
}