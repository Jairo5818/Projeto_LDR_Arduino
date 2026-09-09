# ESPECIFICAÇÃO TÉCNICA DO SISTEMA: PROJETO_LDR_ARDUINO

---

## 1. RESUMO EXECUTIVO

Este documento apresenta a especificação técnica do sistema de monitoramento térmico baseado no microcontrolador Arduino Uno e no sensor de temperatura analógico LM35. O sistema realiza a amostragem contínua do sinal de entrada (INPUT) para detecção de variações térmicas e acionamento proporcional de atuadores de saída (OUTPUT).

---

## 2. DADOS DO PROJETO E AUTORIA

| Campo | Informação |
| :--- | :--- |
| **Projeto** | Monitor de Temperatura Analógico |
| **Plataforma** | Arduino AVR (ATmega328P) |
| **Integrantes** | Jairo Lopes da Silva Junior <br> Fernando Alves de Lima (Estudante) |
| **Versão** | 1.0.0 |

---

## 3. ESPECIFICAÇÃO DE HARDWARE E COMPONENTES

A Tabela 1 descreve os componentes eletrônicos necessários para a montagem do circuito.

**Tabela 1:** Lista de Materiais e Componentes (BOM)

| Item | Componente | Quantidade | Especificação Técnica / Observações |
| :---: | :--- | :---: | :--- |
| 1 | Arduino Uno Rev3 | 1 un. | Microcontrolador ATmega328P, Tensão de Operação 5V |
| 2 | Sensor LM35 | 1 un. | Sensor de temperatura de precisão (10mV/°C) |
| 3 | LED Difuso (5mm) | 1 un. | Atuador luminoso de alerta |
| 4 | Resistor de Filme de Carbono | 1 un. | 220 Ω, 1/4W, Tolerância ±5% (Limitador de Corrente) |
| 5 | Protoboard | 1 un. | Matriz de contatos de 830 pontos |
| 6 | Condutores (Jumpers) | Vários | Tipo Macho-Macho, AWG 26 |

---

## 4. ARQUITETURA DO CIRCUITO E DIAGRAMAS

### 4.1 Visão Geral do Circuito Esquemático

A Figura 1 ilustra a disposição dos componentes na protoboard e suas interconexões com a placa Arduino Uno.

![Diagrama Geral do Circuito](https://github.com/Jairo5818/Projeto_LDR_Arduino/blob/main/Arduino.png?raw=true)

*Figura 1: Visão geral das conexões elétricas.*

---

### 4.2 Detalhamento do Bloco do Sensor

A Figura 2 destaca o barramento do sensor analógico conectado à porta de entrada analógica A0.

![Detalhamento do Sensor](https://github.com/Jairo5818/Projeto_LDR_Arduino/blob/main/Arduinozoom.png?raw=true)
*Figura 2: Detalhe da pinagem e conexão do sensor.*

---

## 5. PINAGEM E MAPEAMENTO DE I/O

A Tabela 2 indica a alocação dos pinos do microcontrolador e a direção do fluxo de dados.

**Tabela 2:** Mapeamento de Entradas e Saídas (I/O)

| Pino do Arduino | Função do Componente | Tipo de Sinal | Direção |
| :---: | :--- | :---: | :---: |
| `A0` | Vout do Sensor LM35 | Analógico (0-5V) | **INPUT** |
| `13` | Anodo do LED de Sinalização | Digital (PWM/GPIO) | **OUTPUT** |
| `5V` | Alimentação VCC | Potência | - |
| `GND` | Referência de Terra | Potência | - |

---

## 6. IMPLEMENTAÇÃO DE SOFTWARE

### 6.1 Módulo de Aquisição de Sinal (INPUT)

O trecho de código abaixo apresenta o procedimento de inicialização da porta de entrada analógica dedicada à captura dos dados do sensor.

```cpp
// ============================================================================
// DEFINIÇÃO DE HARDWARE E MAPEAMENTO DE PINOS
// ============================================================================
const int PINO_SENSOR = A0;  // Canal Analógico A0 definido como entrada do sensor

void setup() {
  // Configuração da taxa de transmissão serial para depuração
  Serial.begin(9600);
  
  // Define o pino A0 explicitamente como entrada de sinal (INPUT)
  pinMode(PINO_SENSOR, INPUT);
}
```
