[MeasureWeather]
Measure=WebParser
UpdateRate=3600
Url=https://api.openweathermap.org/data/2.5/weather?q=#weatherCode#&units=#weatherUnitSystem#&appid=#openweathermapApiKey#
RegExp=(?siU).*"icon":"(.*)[dn]".*"temp":(.*)[,\.].*
; Working example url:
;https://api.openweathermap.org/data/2.5/weather?q=Budapest,hu&units=metric&appid=f876d352020c6490d27b248538c6d261

[MeasureWeatherIcon]
Measure=WebParser
Url=[MeasureWeather]
StringIndex=1

[MeasureWeatherTemp]
Measure=WebParser
Url=[MeasureWeather]
StringIndex=2
Substitute="-0":"0"