// https://ru.wikipedia.org/wiki/%D0%95%D0%B4%D0%B8%D0%BD%D0%B8%D1%86%D1%8B_%D0%B8%D0%B7%D0%BC%D0%B5%D1%80%D0%B5%D0%BD%D0%B8%D1%8F_%D1%82%D0%B5%D0%BC%D0%BF%D0%B5%D1%80%D0%B0%D1%82%D1%83%D1%80%D1%8B

// Перечисление для единиц измерения температуры:
typedef enum
{
  CELSIUS,
  FAHRENHEIT,
  KELVIN,
  RANKINE,
  REAUMUR,
  ROMER,
  DELISLE,
  HUKE,
  DALTON,
  NEWTON,
  LEIDEN,
  PLANCK
} TemperatureUnit;

// Градус Цельсия (°C):
static double convert_temperature_celsius_to_celsius(double temperature) { return temperature; }
static double convert_temperature_celsius_to_fahrenheit(double temperature) { return (temperature * 9 / 5) + 32; }
static double convert_temperature_celsius_to_kelvin(double temperature) { return temperature + 273.15; }
static double convert_temperature_celsius_to_reaumur(double temperature) { return temperature * 0.8; }
static double convert_temperature_celsius_to_romer(double temperature) { return temperature * 21 / 40 + 7.5; }
static double convert_temperature_celsius_to_rankine(double temperature) { return temperature * 1.8 + 491.67; }
static double convert_temperature_celsius_to_delisle(double temperature) { return (100 - temperature) * 3 / 2; }
static double convert_temperature_celsius_to_huke(double temperature) { return temperature * 2 / 3; }
static double convert_temperature_celsius_to_dalton(double temperature) { return temperature * 2.25; }
static double convert_temperature_celsius_to_newton(double temperature) { return temperature * 33 / 100; }
static double convert_temperature_celsius_to_leiden(double temperature) { return temperature * 40 / 21; }
static double convert_temperature_celsius_to_planck(double temperature) { return temperature / 1.416808; }

// Градус Фаренгейта (°F):
static double convert_temperature_fahrenheit_to_celsius(double temperature) { return (temperature - 32) * 5 / 9; }
static double convert_temperature_fahrenheit_to_fahrenheit(double temperature) { return temperature; }
static double convert_temperature_fahrenheit_to_kelvin(double temperature) { return (temperature - 32) * 5 / 9 + 273.15; }
static double convert_temperature_fahrenheit_to_reaumur(double temperature) { return (temperature - 32) * 4 / 9; }
static double convert_temperature_fahrenheit_to_romer(double temperature) { return (temperature - 32) * 7 / 24 + 7.5; }
static double convert_temperature_fahrenheit_to_rankine(double temperature) { return temperature + 459.67; }
static double convert_temperature_fahrenheit_to_delisle(double temperature) { return (212 - temperature) * 3.75 / 2.25; }
static double convert_temperature_fahrenheit_to_huke(double temperature) { return (temperature - 32) * 5 / 9 * 1.5; }
static double convert_temperature_fahrenheit_to_dalton(double temperature) { return (temperature - 32) * 5 / 9 / 0.89635; }
static double convert_temperature_fahrenheit_to_newton(double temperature) { return (temperature - 32) * 11 / 60; }
static double convert_temperature_fahrenheit_to_leiden(double temperature) { return (temperature - 32) * 40 / 21; }
static double convert_temperature_fahrenheit_to_planck(double temperature) { return temperature / 1.416808; }

// Градус Кельвина (°K):
static double convert_temperature_kelvin_to_celsius(double temperature) { return temperature - 273.15; }
static double convert_temperature_kelvin_to_fahrenheit(double temperature) { return (temperature - 273.15) * 9 / 5 + 32; }
static double convert_temperature_kelvin_to_kelvin(double temperature) { return temperature; }
static double convert_temperature_kelvin_to_reaumur(double temperature) { return (temperature - 273.15) * 0.8; }
static double convert_temperature_kelvin_to_romer(double temperature) { return (temperature - 273.15) * 40 / 21 + 7.5; }
static double convert_temperature_kelvin_to_rankine(double temperature) { return temperature * 1.8; }
static double convert_temperature_kelvin_to_delisle(double temperature) { return (373.15 - temperature) * 3.75 / 2.25; }
static double convert_temperature_kelvin_to_huke(double temperature) { return temperature * 1.5; }
static double convert_temperature_kelvin_to_dalton(double temperature) { return temperature * 0.89635; }
static double convert_temperature_kelvin_to_newton(double temperature) { return (temperature - 273.15) * 33 / 100; }
static double convert_temperature_kelvin_to_leiden(double temperature) { return temperature * 1.13924; }
static double convert_temperature_kelvin_to_planck(double temperature) { return temperature / 1.416808; }

// Градус Реомюра (°Ré, °Re, °R):
static double convert_temperature_reaumur_to_celsius(double temperature) { return temperature / 0.8; }
static double convert_temperature_reaumur_to_fahrenheit(double temperature) { return temperature * 9 / 4 + 32; }
static double convert_temperature_reaumur_to_kelvin(double temperature) { return temperature / 0.8 + 273.15; }
static double convert_temperature_reaumur_to_reamur(double temperature) { return temperature; }
static double convert_temperature_reaumur_to_romer(double temperature) { return temperature * 21 / 32 + 7.5; }
static double convert_temperature_reaumur_to_rankine(double temperature) { return temperature * 9 / 4 * 9 / 5; }
static double convert_temperature_reaumur_to_delisle(double temperature) { return (80 - temperature) * 3.75 / 2.25; }
static double convert_temperature_reaumur_to_huke(double temperature) { return temperature * 5 / 8; }
static double convert_temperature_reaumur_to_dalton(double temperature) { return temperature * 0.8 / 0.89635; }
static double convert_temperature_reaumur_to_newton(double temperature) { return temperature * 35 / 22; }
static double convert_temperature_reaumur_to_leiden(double temperature) { return temperature * 40 / 21; }
static double convert_temperature_reaumur_to_planck(double temperature) { return temperature / 1.416808; }

// Градус Рёмера (°Rø):
static double convert_temperature_romer_to_celsius(double temperature) { return (temperature - 7.5) * 40 / 21; }
static double convert_temperature_romer_to_fahrenheit(double temperature) { return (temperature - 7.5) * 24 / 7 + 32; }
static double convert_temperature_romer_to_kelvin(double temperature) { return (temperature - 7.5) * 21 / 40 + 273.15; }
static double convert_temperature_romer_to_reaumur(double temperature) { return (temperature - 7.5) * 32 / 21; }
static double convert_temperature_romer_to_romer(double temperature) { return temperature; }
static double convert_temperature_romer_to_rankine(double temperature) { return temperature * 24 / 7 + 459.67; }
static double convert_temperature_romer_to_delisle(double temperature) { return (60 - temperature) * 3.75 / 2.25; }
static double convert_temperature_romer_to_huke(double temperature) { return temperature * 5 / 9; }
static double convert_temperature_romer_to_dalton(double temperature) { return temperature; }
static double convert_temperature_romer_to_newton(double temperature) { return temperature * 35 / 22; }
static double convert_temperature_romer_to_leiden(double temperature) { return temperature * 40 / 21; }
static double convert_temperature_romer_to_planck(double temperature) { return temperature / 1.416808; }

// Градус Ранкина (°Ra):
static double convert_temperature_rankine_to_celsius(double temperature) { return (temperature - 491.67) / 1.8; }
static double convert_temperature_rankine_to_fahrenheit(double temperature) { return temperature - 459.67; }
static double convert_temperature_rankine_to_kelvin(double temperature) { return temperature / 1.8; }
static double convert_temperature_rankine_to_reaumur(double temperature) { return (temperature - 491.67) * 4 / 9; }
static double convert_temperature_rankine_to_romer(double temperature) { return (temperature - 491.67) * 21 / 40 + 7.5; }
static double convert_temperature_rankine_to_rankine(double temperature) { return temperature; }
static double convert_temperature_rankine_to_delisle(double temperature) { return (671.67 - temperature) * 3.75 / 2.25; }
static double convert_temperature_rankine_to_huke(double temperature) { return (temperature - 491.67) * 5 / 9; }
static double convert_temperature_rankine_to_dalton(double temperature) { return temperature / 1.8 / 0.89635; }
static double convert_temperature_rankine_to_newton(double temperature) { return (temperature - 491.67) * 100 / 33; }
static double convert_temperature_rankine_to_leiden(double temperature) { return temperature * 40 / 21; }
static double convert_temperature_rankine_to_planck(double temperature) { return temperature / 1.416808; }

// Градус Делиля (°Д или °D):
static double convert_temperature_delisle_to_celsius(double temperature) { return 100 - temperature * 2 / 3; }
static double convert_temperature_delisle_to_fahrenheit(double temperature) { return (212 - temperature * 2 / 3) * 5 / 9; }
static double convert_temperature_delisle_to_kelvin(double temperature) { return 100 - temperature * 2 / 3 + 273.15; }
static double convert_temperature_delisle_to_reaumur(double temperature) { return (80 - temperature * 2 / 3) * 4 / 5; }
static double convert_temperature_delisle_to_romer(double temperature) { return (60 - temperature * 2 / 3) * 21 / 40 + 7.5; }
static double convert_temperature_delisle_to_rankine(double temperature) { return (671.67 - temperature * 2 / 3) * 9 / 5; }
static double convert_temperature_delisle_to_delisle(double temperature) { return temperature; }
static double convert_temperature_delisle_to_huke(double temperature) { return temperature * 2 / 3; }
static double convert_temperature_delisle_to_dalton(double temperature) { return temperature * 2.25; }
static double convert_temperature_delisle_to_newton(double temperature) { return temperature * 33 / 50; }
static double convert_temperature_delisle_to_leiden(double temperature) { return temperature * 40 / 21; }
static double convert_temperature_delisle_to_planck(double temperature) { return temperature * 1.13924; }

// Градус Гука (°H):
static double convert_temperature_huke_to_celsius(double temperature) { return temperature * 3 / 2; }
static double convert_temperature_huke_to_fahrenheit(double temperature) { return temperature * 3 / 2 * 1.8 + 32; }
static double convert_temperature_huke_to_kelvin(double temperature) { return temperature * 3 / 2 + 273.15; }
static double convert_temperature_huke_to_reaumur(double temperature) { return temperature * 3 / 2 * 4 / 5; }
static double convert_temperature_huke_to_romer(double temperature) { return temperature * 3 / 2 * 21 / 40 + 7.5; }
static double convert_temperature_huke_to_rankine(double temperature) { return temperature * 3 / 2 * 9 / 5; }
static double convert_temperature_huke_to_delisle(double temperature) { return temperature * 3 / 2 * 3.75; }
static double convert_temperature_huke_to_huke(double temperature) { return temperature; }
static double convert_temperature_huke_to_dalton(double temperature) { return temperature * 0.75; }
static double convert_temperature_huke_to_newton(double temperature) { return temperature * 5 / 9; }
static double convert_temperature_huke_to_leiden(double temperature) { return temperature * 40 / 21; }
static double convert_temperature_huke_to_planck(double temperature) { return temperature * 0.9033; }

// Градус Дальтона (°Dа):
static double convert_temperature_dalton_to_celsius(double temperature) { return temperature / 2.25; }
static double convert_temperature_dalton_to_fahrenheit(double temperature) { return temperature / 2.25 * 1.8 + 32; }
static double convert_temperature_dalton_to_kelvin(double temperature) { return temperature / 2.25 + 273.15; }
static double convert_temperature_dalton_to_reaumur(double temperature) { return temperature / 2.25 * 4 / 5; }
static double convert_temperature_dalton_to_romer(double temperature) { return temperature / 2.25 * 21 / 40 + 7.5; }
static double convert_temperature_dalton_to_rankine(double temperature) { return temperature / 2.25 * 9 / 5; }
static double convert_temperature_dalton_to_delisle(double temperature) { return temperature / 2.25 * 3.75; }
static double convert_temperature_dalton_to_huke(double temperature) { return temperature / 0.75; }
static double convert_temperature_dalton_to_dalton(double temperature) { return temperature; }
static double convert_temperature_dalton_to_newton(double temperature) { return temperature * 1.2; }
static double convert_temperature_dalton_to_leiden(double temperature) { return temperature * 40 / 21; }
static double convert_temperature_dalton_to_planck(double temperature) { return temperature * 0.89635; }

// Градус Ньютона (°N):
static double convert_temperature_newton_to_celsius(double temperature) { return temperature * 100 / 33; }
static double convert_temperature_newton_to_fahrenheit(double temperature) { return temperature * 100 / 33 * 1.8 + 32; }
static double convert_temperature_newton_to_kelvin(double temperature) { return temperature * 100 / 33 + 273.15; }
static double convert_temperature_newton_to_reaumur(double temperature) { return temperature * 100 / 33 * 4 / 5; }
static double convert_temperature_newton_to_romer(double temperature) { return temperature * 100 / 33 * 21 / 40 + 7.5; }
static double convert_temperature_newton_to_rankine(double temperature) { return temperature * 100 / 33 * 9 / 5; }
static double convert_temperature_newton_to_delisle(double temperature) { return (33 - temperature) * 50 / 33; }
static double convert_temperature_newton_to_huke(double temperature) { return temperature * 9 / 5; }
static double convert_temperature_newton_to_dalton(double temperature) { return temperature / 1.2; }
static double convert_temperature_newton_to_newton(double temperature) { return temperature; }
static double convert_temperature_newton_to_leiden(double temperature) { return temperature * 40 / 21; }
static double convert_temperature_newton_to_planck(double temperature) { return temperature * 0.969; }

// Лейденский градус (°L или ÐL):
static double convert_temperature_leiden_to_celsius(double temperature) { return temperature * 21 / 40; }
static double convert_temperature_leiden_to_fahrenheit(double temperature) { return temperature * 21 / 40 * 1.8 + 32; }
static double convert_temperature_leiden_to_kelvin(double temperature) { return temperature * 21 / 40 + 273.15; }
static double convert_temperature_leiden_to_reaumur(double temperature) { return temperature * 21 / 40 * 4 / 5; }
static double convert_temperature_leiden_to_romer(double temperature) { return temperature * 21 / 40 * 21 / 40 + 7.5; }
static double convert_temperature_leiden_to_rankine(double temperature) { return temperature * 21 / 40 * 9 / 5; }
static double convert_temperature_leiden_to_delisle(double temperature) { return (100 - temperature) * 7 / 20; }
static double convert_temperature_leiden_to_huke(double temperature) { return temperature * 21 / 40 / 0.9033; }
static double convert_temperature_leiden_to_dalton(double temperature) { return temperature * 21 / 40 / 0.89635; }
static double convert_temperature_leiden_to_newton(double temperature) { return temperature * 21 / 40 * 100 / 33; }
static double convert_temperature_leiden_to_leiden(double temperature) { return temperature; }
static double convert_temperature_leiden_to_planck(double temperature) { return temperature * 1.13924; }

// Планковская температура (TP):
static double convert_temperature_planck_to_celsius(double temperature) { return temperature / 1.416808; }
static double convert_temperature_planck_to_fahrenheit(double temperature) { return temperature * 1.416808 + 32; }
static double convert_temperature_planck_to_kelvin(double temperature) { return temperature * 1.416808; }
static double convert_temperature_planck_to_reaumur(double temperature) { return temperature * 1.25; }
static double convert_temperature_planck_to_romer(double temperature) { return temperature * 0.525 + 7.5; }
static double convert_temperature_planck_to_rankine(double temperature) { return temperature * 1.416808 * 9 / 5; }
static double convert_temperature_planck_to_delisle(double temperature) { return temperature / 1.13924; }
static double convert_temperature_planck_to_huke(double temperature) { return temperature / 0.9033; }
static double convert_temperature_planck_to_dalton(double temperature) { return temperature / 0.89635; }
static double convert_temperature_planck_to_leiden(double temperature) { return temperature / 1.13924; }
static double convert_temperature_planck_to_newton(double temperature) { return temperature * 0.33; }
static double convert_temperature_planck_to_planck(double temperature) { return temperature; }

// :
static double (*temperature_converters[12][12])(double) = {
    {NULL, convert_temperature_celsius_to_fahrenheit, convert_temperature_celsius_to_kelvin, convert_temperature_celsius_to_rankine, convert_temperature_celsius_to_reaumur, convert_temperature_celsius_to_romer, convert_temperature_celsius_to_delisle, convert_temperature_celsius_to_huke, convert_temperature_celsius_to_dalton, convert_temperature_celsius_to_newton, convert_temperature_celsius_to_leiden, convert_temperature_celsius_to_planck},
    {convert_temperature_fahrenheit_to_celsius, NULL, convert_temperature_fahrenheit_to_kelvin, convert_temperature_fahrenheit_to_rankine, convert_temperature_fahrenheit_to_reaumur, convert_temperature_fahrenheit_to_romer, convert_temperature_fahrenheit_to_delisle, convert_temperature_fahrenheit_to_huke, convert_temperature_fahrenheit_to_dalton, convert_temperature_fahrenheit_to_newton, convert_temperature_fahrenheit_to_leiden, convert_temperature_fahrenheit_to_planck},
    {convert_temperature_kelvin_to_celsius, convert_temperature_kelvin_to_fahrenheit, NULL, convert_temperature_kelvin_to_rankine, convert_temperature_kelvin_to_reaumur, convert_temperature_kelvin_to_romer, convert_temperature_kelvin_to_delisle, convert_temperature_kelvin_to_huke, convert_temperature_kelvin_to_dalton, convert_temperature_kelvin_to_newton, convert_temperature_kelvin_to_leiden, convert_temperature_kelvin_to_planck},
    {convert_temperature_rankine_to_celsius, convert_temperature_rankine_to_fahrenheit, convert_temperature_rankine_to_kelvin, NULL, convert_temperature_rankine_to_reaumur, convert_temperature_rankine_to_romer, convert_temperature_rankine_to_delisle, convert_temperature_rankine_to_huke, convert_temperature_rankine_to_dalton, convert_temperature_rankine_to_newton, convert_temperature_rankine_to_leiden, convert_temperature_rankine_to_planck},
    {convert_temperature_reaumur_to_celsius, convert_temperature_reaumur_to_fahrenheit, convert_temperature_reaumur_to_kelvin, convert_temperature_reaumur_to_rankine, NULL, convert_temperature_reaumur_to_romer, convert_temperature_reaumur_to_delisle, convert_temperature_reaumur_to_huke, convert_temperature_reaumur_to_dalton, convert_temperature_reaumur_to_newton, convert_temperature_reaumur_to_leiden, convert_temperature_reaumur_to_planck},
    {convert_temperature_romer_to_celsius, convert_temperature_romer_to_fahrenheit, convert_temperature_romer_to_kelvin, convert_temperature_romer_to_rankine, convert_temperature_romer_to_reaumur, NULL, convert_temperature_romer_to_delisle, convert_temperature_romer_to_huke, convert_temperature_romer_to_dalton, convert_temperature_romer_to_newton, convert_temperature_romer_to_leiden, convert_temperature_romer_to_planck},
    {convert_temperature_delisle_to_celsius, convert_temperature_delisle_to_fahrenheit, convert_temperature_delisle_to_kelvin, convert_temperature_delisle_to_rankine, convert_temperature_delisle_to_reaumur, convert_temperature_delisle_to_romer, NULL, convert_temperature_delisle_to_huke, convert_temperature_delisle_to_dalton, convert_temperature_delisle_to_newton, convert_temperature_delisle_to_leiden, convert_temperature_delisle_to_planck},
    {convert_temperature_huke_to_celsius, convert_temperature_huke_to_fahrenheit, convert_temperature_huke_to_kelvin, convert_temperature_huke_to_rankine, convert_temperature_huke_to_reaumur, convert_temperature_huke_to_romer, convert_temperature_huke_to_delisle, NULL, convert_temperature_huke_to_dalton, convert_temperature_huke_to_newton, convert_temperature_huke_to_leiden, convert_temperature_huke_to_planck},
    {convert_temperature_dalton_to_celsius, convert_temperature_dalton_to_fahrenheit, convert_temperature_dalton_to_kelvin, convert_temperature_dalton_to_rankine, convert_temperature_dalton_to_reaumur, convert_temperature_dalton_to_romer, convert_temperature_dalton_to_delisle, convert_temperature_dalton_to_huke, NULL, convert_temperature_dalton_to_newton, convert_temperature_dalton_to_leiden, convert_temperature_dalton_to_planck},
    {convert_temperature_newton_to_celsius, convert_temperature_newton_to_fahrenheit, convert_temperature_newton_to_kelvin, convert_temperature_newton_to_rankine, convert_temperature_newton_to_reaumur, convert_temperature_newton_to_romer, convert_temperature_newton_to_delisle, convert_temperature_newton_to_huke, convert_temperature_newton_to_dalton, NULL, convert_temperature_newton_to_leiden, convert_temperature_newton_to_planck},
    {convert_temperature_leiden_to_celsius, convert_temperature_leiden_to_fahrenheit, convert_temperature_leiden_to_kelvin, convert_temperature_leiden_to_rankine, convert_temperature_leiden_to_reaumur, convert_temperature_leiden_to_romer, convert_temperature_leiden_to_delisle, convert_temperature_leiden_to_huke, convert_temperature_leiden_to_dalton, convert_temperature_leiden_to_newton, NULL, convert_temperature_leiden_to_planck},
    {convert_temperature_planck_to_celsius, convert_temperature_planck_to_fahrenheit, convert_temperature_planck_to_kelvin, convert_temperature_planck_to_rankine, convert_temperature_planck_to_reaumur, convert_temperature_planck_to_romer, convert_temperature_planck_to_delisle, convert_temperature_planck_to_huke, convert_temperature_planck_to_dalton, convert_temperature_planck_to_newton, convert_temperature_planck_to_leiden, NULL}};

static double convert_temperature(double temperature, TemperatureUnit from_unit, TemperatureUnit to_unit)
{
  if (from_unit == to_unit || from_unit < 0 || to_unit < 0 || from_unit >= 12 || to_unit >= 12)
  {
    return temperature; // Нет необходимости в конвертации, если единицы измерения совпадают или неверны.
  }

  return temperature_converters[from_unit][to_unit](temperature);
}
