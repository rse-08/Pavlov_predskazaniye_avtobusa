
//Маркеры памяти
//void - пустота - космос - ничего - не использует память
//int  - интеджер - целое - память для чисел 12345
//char - символы - буквы
//long - для всего
//------setup - Название
//------() - круглые скобки (SHIFT+9, SHIFT+0) настройки
//------{} - фигурные скобки (SHIFT+Х, SHIFT+Ъ) Начало и конец
//Сложных приказов

//способности
#include iarduino_RTC time(RTC_DS3231);
//узнать текущее время 
void vrem(){
 if (millis() % 1000 == 0) {  // если прошла 1 секунда
        Serial.println(time.gettime( "d-m-Y, H:i:s, D"));  // выводим время
        delay(1);  // приостанавливаем на 1 мс, чтоб не выводить время несколько раз за 1мс
    }
}
//прочитать расписание
void schetRasp(){

}
//вывести на экран
void ecran(){

} 
//проверить кнопка
void knop(){
  
}

void setup() {       //-слэш - разрез /слэш в гору \слэш с горы
  delay(300);
    Serial.begin(9600);
    time.begin();
}

void loop() {
 

}
