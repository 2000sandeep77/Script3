TR02_ApplyDebitCard()
{

	lr_think_time(24);

	web_url("debit_card_form.php", 
		"URL=http://localhost/banking/debit_card_form.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../favicon.ico", ENDITEM, 
		LAST);

	return 0;
}