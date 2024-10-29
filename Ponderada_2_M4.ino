// Esse código simula um semáforo para carros e pedestres
// Aqui temos leds que representam o farol para os carros (c) e pedestres (p)
// Definição das portas e das variáveis ponteiro
  int led_r = 32;
  int led_y = 26;
  int led_g = 25;
  int* ponteiro_r;
  int* ponteiro_y;
  int* ponteiro_g;

void setup()
{
  // Referencia as variaveis que os ponteiros vão armazenar
  ponteiro_r = (int*)&led_r;
  ponteiro_y = (int*)&led_y;
  ponteiro_g = (int*)&led_g;
  // Define como output as portas
  pinMode(32, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(25, OUTPUT);  
}

void loop()
{
  // Vermelho on / Amarelo off
  digitalWrite(*ponteiro_y, LOW);
  digitalWrite(*ponteiro_r, HIGH);
  delay(6000);
  // Amarelo on / Vermelho off
  digitalWrite(*ponteiro_r, LOW);
  digitalWrite(*ponteiro_y, HIGH);
  delay(2000);
  // Verde on / Amarelo off
  digitalWrite(*ponteiro_y, LOW);
  digitalWrite(*ponteiro_g, HIGH);
  delay(4000);
  // Amarelo on / Verde off
  digitalWrite(*ponteiro_g, LOW);
  digitalWrite(*ponteiro_y, HIGH);
  delay(2000);
}

