#include <stdio.h>

char* predict_weather(float temp, float humidity, float wind) {

    if (temp > 35 && humidity < 40)
        return "Hot and Dry";
    else if (temp > 30 && humidity > 60)
        return "Hot and Humid";
    else if (temp < 15)
        return "Cold Weather";
    else if (humidity > 80 && wind < 10)
        return "Possibility of Rain";
    else if (wind > 25)
        return "Windy Weather";
    else
        return "Normal Weather";
}

int main() {
    float temperature, humidity, wind_speed;

    printf("Enter temperature (°C): ");
    scanf("%f", &temperature);

    printf("Enter humidity (%%): ");
    scanf("%f", &humidity);

    printf("Enter wind speed (km/h): ");
    scanf("%f", &wind_speed);

    printf("\nPredicted Weather: %s\n", 
            predict_weather(temperature, humidity, wind_speed));

    return 0;
}
