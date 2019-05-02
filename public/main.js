function loadHello() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("message").innerHTML = xhttp.responseText;
    }
  };
  xhttp.open("GET", "hello", true);
  xhttp.send();
}
