<?php
  function ExibeErro()
  {
     echo "Erro n�mero: ".mysql_errno().": ".mysql_error();
     exit();
  }
?>