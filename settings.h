const char settings_html[] PROGMEM = R"=====(
<!DOCTYPE HTML>
<html>
<head><title>Advanced Settings</title></head>
<body onload=tzupdate()>
<form action=/ method=GET>
Hour Marks: <select name=hourmarks>
<option value=0>none</option>
<option value=1>Midday</option>
<option value=2>Quadrants</option>
<option value=3>Hours</option>
</select><br>

<input id=showsecondshidden type=hidden name=showsecondshidden value='0'>
Show Seconds<input type=checkbox name=showseconds value='1'><br>
Sleep (24hr)<br><input type=text name=sleep value=23><br>
Wake (24hr)<br><input type=text name=wake value=7><br>
Timezone:<br><input type=text name=timezone id=timezone></input><br>
<input type=submit name=submit value='Update Settings'/></form>
<a href=/>Return without saving</a><br>
<a href=/cleareeprom>Reset to factory default</a>
<script>function tzupdate(){var a=new Date();var b=a.getTimezoneOffset();document.getElementById("timezone").value=b/-60};</script>
</body>
</html>
)=====";