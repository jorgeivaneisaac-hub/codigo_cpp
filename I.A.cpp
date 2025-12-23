#include <iostream>
#include <vector>

int main() {
    // Datos de entrenamiento (Celsius y su equivalente Fahrenheit)
    std::vector<float> celsius = {-40, -10, 0, 8, 15, 22, 38};
    std::vector<float> fahrenheit = {-40, 14, 32, 46, 59, 72, 100};

    float peso = 0.5; // Valor inicial aleatorio
    float sesgo = 0.0; // Valor inicial aleatorio
    float tasa_aprendizaje = 0.001;

    // Entrenamiento (Ciclo de aprendizaje)
    for (int epoch = 0; epoch < 2000; epoch++) {
        for (size_t i = 0; i < celsius.size(); i++) {
            float prediccion = (celsius[i] * peso) + sesgo;
            float error = prediccion - fahrenheit[i];

            // Ajuste de peso y sesgo (Descenso de Gradiente)
            peso -= tasa_aprendizaje * error * celsius[i];
            sesgo -= tasa_aprendizaje * error;
        }
    }

    // Probar la IA
    float test = 100.0;
    float resultado = (test * peso) + sesgo;
    
    std::cout << "IA entrenada. Prediccion para 100C: " << resultado << " F" << std::endl;
    std::cout << "Peso aprendido: " << peso << " | Sesgo aprendido: " << sesgo << std::endl;

    return 0;
}

