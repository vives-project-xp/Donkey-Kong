# Donkey Kong Barrel Drop

<h2> Inhoud</h2>

 <ul>
1. Het geautomatiseerd pinslot
 </ul>
 <ul>
2. Doel van het project
 </ul>
 <ul>
3. Software
    <ul>
  3.1 Visual studio code
 </ul>
 <ul>
  3.2 Hoe gebruiken
 </ul>
 <ul>
  3.3 Uploaden
 </ul>
 </ul>
 <ul>
4. Gebruik
 </ul>
 <ul>
 5. Code 
 </ul>
 <ul>
 6. Project zelf uitbreiden
 </ul>
 
   <h2>1. Het geautomatiseerd pinslot</h2>

<img src = "Model Escape Room.png" width = "400" height = "250">

Dit is een veiligheidssysteem voor een vallende brug. Als onderdeel van een opdracht in een escape room wordt een ton
met een actuator omhoog gehoffen, nadat de bezoekers handmatig de veiligheidspin uit de ton trekken. Nu is de bedoeling dat wij dit automatiseren en dit zullen we doen aan de hand van een solenoïde. Hierbij maken we in feite een pinslot na.

<h2>2. Doel van het project</h2>
Het systeem was niet veilig genoeg aangezien de mensen de ton zelf omhoog konden heffen nadat ze de pin handmatig eruit trokken, waardoor de brug 
op hun voeten kon vallen. Onze solenoïde vervangt dit, en zorgt er meteen voor dat bezoekers de ton niet meer omhoog kunnen heffen. Aan de ton is ook een deurtje. Hier gaan we een magneetcontact aan bevestigen, wanneer het deurtje opent zal de knop oplichten.

 <h2>3. Software</h2>
Bij dit project we niet zoveel software nodig. We hebben dit project gemaakt met een nucleo-L476RG hiervoor hebben we dus code voor geprogrammeerd. Ik zal uitleggen wat je nodig hebt om die code te kunnen lezen en uploaden.

<h3>3.1 Visual studio code </h3>
We beginnen met het downloaden van visual studio code. Je typt visual studio code in de zoekbalk of druk op het linkje hieronder weergegeven.<br>
https://code.visualstudio.com/

<img src="https://user-images.githubusercontent.com/113902824/236618005-f79a7fd0-73b2-45e0-bf72-a1ce0b5c4c09.png" width= "400" height="250">

Voor windows gebruikers kun je op download for Windows drukken.
Als je een apple gebruiker bent druk dan rechtsboven op download en dan op mac
Nu is visual studio code aan het downloaden
Dan ga je naar je verkenner en druk je op downloads vanboven zie je visual studio staan

<img src="https://user-images.githubusercontent.com/113902824/236618356-cd0f2e58-5b22-4427-b265-66d9865a9664.png" width= "400" height= "250">

Voer nu de volgende stappen uit:

<img src="https://user-images.githubusercontent.com/113902824/236618890-f5e37c64-bd3e-483c-a27c-f84121434a00.png" width= "400" height="250">

Druk op next en dan op install visual studio is nu volledig geïnstalleerd.
Mocht het niet lukken staat er hieronder een linkje naar een video die stap voor stap uitlegd hoe je dit moet installeren.
https://www.youtube.com/watch?v=JPZsB_6yHVo

<h3>3.2 Hoe gebruiken</h3>
Om een nieuw document aan te maken druk je rechtsboven op file en dan op new file.
<img src="https://user-images.githubusercontent.com/113902824/236619355-bf3a6cae-01ba-4d09-815d-65d3b7ab0466.png" width= "400" heigth="250">

<h3>3.3 Uploaden </h3>
Om een project te uploaden naar je microcontroller in dit geval de nucleo moet je deze natuurlijk aansluiten op de computer met het bijgeleverde kabeltje.
Dan druk je op terminal die helemaal vanboven staat en opent de terminal.
Dan vul je de volgende code in:
<ul>
Conda activate mbed
</ul>
<ul>
 mbed new.naam project
 </ul>
 <ul>
 mbed compile -f
 </ul>


<h2>4. Gebruik</h2>
Dit project zal gebruikt worden in een escape room. In de escape room zullen de spelers verwezen worden naar de deur van de ton. Wanneerde deur van de ton open gaat zullen ze een knop zien die knippert. De ogen van de spelers zullen dus direct op de drukknop vallen en ze weten dus dat ze daarop gaan moeten drukken.

<h2>5. Code</h2>
Dit is de code van ons project. Boven ieder blokje code staat er wat het doet.
<img src= https://user-images.githubusercontent.com/113902824/236620357-a0b89139-dfbf-44a5-b49f-847cacf94213.png width="260" height="500">

<h2>6. Project zelf Uitbreiden</h2>
Als je een geniaal idee hebt wil je dit natuurlijk kunnen realiseren. Dit is ook mogelijk om uitbreiding te doen hieronder vind je het bestand met de programmeercode, zo kun je dit zelf aanpassen.
<h2>Change log</h2>
<h2>License and author info</h2>

