## Простой драйвер для дисплея BA63 на USART без контроля CTS/RTS

Список функций:

`void BA63_SetCP(uint16_t cpCode)` Выбор кодовой страницы дисплея

`void BA63_ClearVFD(void)` Очистка экрана дисплея

`void BA63_SetPos(uint8_t _pX, uint8_t _pY)` Выбор позиции курсора

`void BA63_SendString(uint8_t *string)` Отправка строки на дисплей

`void BA63_DeleteToEndline(void)` Стереть строку

