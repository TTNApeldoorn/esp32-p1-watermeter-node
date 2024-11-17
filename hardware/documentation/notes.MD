# Notes
This page contains notes and references that are helpful for the project:

## DSMR standard
Description of "Dutch Smart Meter Requirements" (DSMR):
https://www.netbeheernederland.nl/_upload/Files/Slimme_meter_15_a727fce1f1.pdf

## Articles 
Some articles about redaing information from the P1-port.

 - (Dutch) http://domoticx.com/p1-poort-slimme-meter-uitlezen-hardware/
 - (Dutch) http://domoticx.com/p1-poort-slimme-meter-hardware/




Ik heb deze week mijn TTGO-T3 op de watermeter en de Slimme meter getest. Volgens mij werkt die nu perfect.
Ik heb de tweede interne hardware UART gebruikt met  pin-mapping en software data inversie.
Er is geen transistor voor data inversie meer nodig.
Voordeel is ook dat de default debug USB niet meer in de weg zit en voor debugging bruikbaar blijft.
De watermeter zit op een GPIO pin gekoppeld aan een interrupt. De interrupt routine is voorzien van debouncing.
Verder gaf de watermeter soms een valse puls, is opgelost met een C-tje van 22nf
De interrupt routine verhoogt de interne liter counter bij een opgaande puls. Deze counter wordt iedere 10 minuten gecheckt en alleen bij een wijziging  opgeslagen in het resident geheugen. Er is gebruik gemaakt van de library Preferences.
Bijgaand het prototype schema: