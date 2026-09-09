# Projeto_LDR_Arduino

# 💡 Controle de LED por LDR com Arduino

# 📝 Descrição do Projeto

Este projeto utiliza a plataforma Arduino para monitorar a intensidade luminosa do ambiente através de um sensor LDR (Resistor Dependente de Luz). Com base nos valores capturados pelo sensor, o sistema processa os dados de entrada e ajusta proporcionalmente a saída para acionar o LED (frequência/brilho), criando uma resposta automatizada à variação de iluminação.

---

# 👥 Integrantes do Grupo

* Jairo Lopes da Silva Junior 
* Fernando Alves de Lima - Estudante

---

#    Materiais e Componentes Eletrônicos

| Componente | Quantidade | Observação |
| :--- | :---: | ---: |
| Arduino Uno | 1 un. | Ou modelo equivalente |
| Sensor LDR (5mm) | 1 un. | Leitura de luminosidade |
| LED (5mm) | 1 un. | Cor à escolha |
| Resistor 220 Ω | 1 un. | Limitador de corrente para o LED |
| Protoboard | 1 un. | Matriz de contatos |
| Jumpers Macho-Macho	 | Vários | Conexões do circuito |

---

# Circuito em Funcionamento

![Texto alternativo para acessibilidade]()

---


# 💻 Trecho do Código (Sensores -> INPUT)

O trecho de código abaixo exemplifica o núcleo da lógica do projeto: O sinal analógico lido no sensor (INPUT).

```cpp

int LDR = A0;  // Entrada do sensor LDR (INPUT)

void setup() {
  pinMode(LDR, INPUT);   // Define pino A0 como Entrada
}
```
