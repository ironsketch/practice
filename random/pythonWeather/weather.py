import pywapi, string
print "test"
weather = pywapi.get_weather_from_weather_com( "USWA0318" , units = 'imperial')
print "Weather.com says: It is " + string.lower(weather['current_conditions']['text']) + " and " + weather['current_conditions']['temperature'] + "F now in Olympia.\n"
