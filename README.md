## Sensor Ultrasonico e LCD com Arduino

> Este   projeto   tem   como   objetivo   o   estudo   do   arduino   e   sensor  
ultrassônico,   desenvolvendo   um   sensor   de   ré,   que   pode   ser   utilizado   em   vários  automóveis quando está estacionando, auxiliando na visibilidade.
Desenvolvido na disciplina de Comunicação de Dados, UNESC.

###Projeto
>Este projeto tem como finalidade um sensor de ré, utilizando materiais de eletrônica como, arduino, sensor ultrassônico, display lcd e um potenciômetro.
	O sensor ultrassônico utilizado para detectar obstáculos e medir a distância destes entre outras aplicações, este sensor possui um emissor e receptor de onda sonoras, que trabalham em alta frequência na faixa dos 40khz, este emite uma onda que é refletida por um obstáculo e captada pelo receptor, assim obtendo o tempo de ocorrência entre a emissão e recepção.
	O arduino será utilizado para a realização dos cálculos das ondas transmitidas pelo sensor, e reponsável pela alimentação e controle da tela lcd, que por sua vez exibe a distância do obstáculo em centímetros e polegadas.

###Materiais Utilizados
- sensor ultrassônico modelo HC-SR04
- Arduino UNO R3
- Potenciômetro 10k ohms
- Protoboard 
- LCD 16X4
- 21 jumpers
- Cabo USB (carregar o programa e fornecer energia ao Arduino)

### Code Block
Configuração dos pinos do display LCD
``` cpp
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
```
cálculo do tempo do sinal emitido pelo sensor,  convertido para distância em centímetros e polegadas
``` cpp
distance_cm = time / 29.4 / 2;
distance_in = time / 74.7 / 2;
```
### Tabela dos Pinos LCD, Sensor e Arduino
| LCD      	|Função    | Ligação  |
| :-------- | --------:| :--: |
| 1		    | Vss      |  Pino 4 ArduinoGND |
| 2	        | Vdd 	   |  Vcc 5V  |
| 3         | V0       | Pino central Potenciômetro  |
| 4         | RS       | Pino 12 Arduino |
| 5         | RW       | GND  |
| 6         | E        | Pino 11 Arduino|
| 7         | D0       | Não Conctado |
| 8         | D1       | Não Conectado|
| 9         | D2       | Não Conectado|
| 10        | D3       | Não Conectado|
| 11        | D4       | Pino 5 Arduino|
| 12        | D5       | Pino 4 Arduino|
| 13        | D6       | Pino 3 Arduino|
| 14        | D7       | Pino 2 Arduino|
| 15        | A        | Vcc 5V |
| 16        | K        | GND    |

### Tabela de Pinos Sensor e Arduino
| Sensor |Arduino|
| :----  | :--:  |
| Echo   | Pino 8| 
| Trig   | Pino 9|
| GND    | GND   |
| Vcc    | Vcc 5V|

###Esquema de Conexões
<img src="http://consultelhas.com.br/images/esquema.png" alt="conexões" />

##Resultado
<img src="http://consultelhas.com.br/images/resultado.jpg" alt="resultado" />

##REFERÊNCIAS
http://blog.fazedores.com/sensor-ultrassonico-com-arduino/
http://blog.filipeflop.com/display/controlando-um-lcd-16x2-com-arduino.html
