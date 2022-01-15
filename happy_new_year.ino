<!doctype html>
<html>
 <head>
  <script type="module" src="./index.js"></script>
  <link rel="stylesheet" href="./styles.css" />
 </head>
 <body>
  <div id="root">loading</div>
 </body>
</html>
import React from "react";
import ReactDOM from "react-dom";

ReactDOM.render( <
 h1 > Happy New year 2022 < /h1>,
 document.getElementById('root')
);
h1 {
 display: flex;
 flex-direction: column;
 background-color: lightblue;
}