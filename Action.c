Action()
{

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_url("banking", 
		"URL=http://localhost/banking", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("r10.o.lencr.org", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04v<\\xE7\\x12\\x13\\x0B\\xF0\\xD6\rq\\x0F9A\\x0Fi\\x9A\\x13", 
		LAST);

	web_custom_request("r10.o.lencr.org_2", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\x0Bh\\xA9.\\x99\\xC1d\\x83I\\xCEL\\xB5\\xD3R\\x89\\xBB\\xBA", 
		LAST);

	web_custom_request("r10.o.lencr.org_3", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\xC3\nN\\xE0\\x18\\xCF\\x8BW\\x8E\\x01F\\xB4\\x85~&,D", 
		LAST);

	web_url("tiles", 
		"URL=https://contile.services.mozilla.com/v1/tiles", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("r10.o.lencr.org_4", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14i\\x0F\\xE4\\x15g\\xEDo\\x7F\\xB54Dd\\x06\\x06o\tg\\x07qr\\x04\\x14t\\xA4v)\\x17\\x18T\\x8517\\xBEg\\xE6\\x06X\\xC0\\xBC\\xC5\\x05r\\x02\\x12\\x04v<\\xE7\\x12\\x13\\x0B\\xF0\\xD6\rq\\x0F9A\\x0Fi\\x9A\\x13", 
		LAST);

	web_custom_request("r10.o.lencr.org_5", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04Ra$\\xCC\\xD4\\xFF\\xD9\\x10\\xBF ;\\xE3\\xB9\\x11g\\xB0\\x92", 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=wss://push.services.mozilla.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"SecWebSocketExtensions=permessage-deflate", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_custom_request("cfr-v1-en-US", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/ms-language-packs/records/cfr-v1-en-US", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1722416229625\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	web_custom_request("r10.o.lencr.org_6", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14i\\x0F\\xE4\\x15g\\xEDo\\x7F\\xB54Dd\\x06\\x06o\tg\\x07qr\\x04\\x14t\\xA4v)\\x17\\x18T\\x8517\\xBEg\\xE6\\x06X\\xC0\\xBC\\xC5\\x05r\\x02\\x12\\x04Ra$\\xCC\\xD4\\xFF\\xD9\\x10\\xBF ;\\xE3\\xB9\\x11g\\xB0\\x92", 
		LAST);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06\\xBA\\xAD\\x9A4\\xCC\\x06O\\x8C\\xD0`k\\x99]\\x9C$", 
		LAST);

	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x01\\xE0c\\x8B\\x9A\\xDF\\x9CB\\x9B\\x90\\xA4n\\xB9\\x86\\x06\\x06", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_url("update.xml", 
		"URL=https://aus5.mozilla.org/update/6/Firefox/128.0.3/20240725162350/WINNT_x86_64-msvc-x64/en-US/release/Windows_NT%252010.0.0.0.20348.887%2520(x64)/ISET%3ASSE4_2%2CMEM%3A16196/default/default/update.xml?force=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("3b49f619-1a6c-48d1-829c-e7fbc6d4fc34", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/3b49f619-1a6c-48d1-829c-e7fbc6d4fc34", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":7,\"start_time\":\"2024-07-31T10:36:39.000+00:00\",\"end_time\":\"2024-07-31T11:23:08.064+00:00\",\"reason\":\"startup\",\"experiments\":{\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-email-and-calendar-tabs-early-day-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"recommend-add-ons-staff-pick-part-2\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"home-and-newtab-wallpapers-v1-rollout-global\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-07-31+00:00\",\"client_id\":\"eba24bb8-b1b7-4cf8-820b-b08ed2ba5bb7\",\"architecture\":\"x86_64\",\"app_channel\":\"release\",\"app_build\":\""
		"20240725162350\",\"os\":\"Windows\",\"app_display_version\":\"128.0.3\",\"locale\":\"en-US\",\"os_version\":\"10.0\",\"windows_build_number\":20348},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\"822571c1-9c9d-4d99-8bbb-5171f4f2a291\"},\"quantity\":{\"urlbar.pref_max_results\":10},\"boolean\":{\"urlbar.pref_suggest_data_collection\":false,\"urlbar.pref_suggest_topsites\":true,\"urlbar.pref_suggest_sponsored\":false,\"urlbar.pref_suggest_nonsponsored\":false}},\"events\":[{\"timestamp\":0,"
		"\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"glean_timestamp\":\"1722424839622\",\"setting\":\"required\"}},{\"timestamp\":1088,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1722424840710\"}}]}", 
		LAST);

	web_custom_request("5deb8a34-fcd7-401b-a764-c8e97b85b1b4", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/5deb8a34-fcd7-401b-a764-c8e97b85b1b4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":7,\"start_time\":\"2024-07-31T10:44:23.000+00:00\",\"end_time\":\"2024-07-31T11:22:59.737+00:00\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"recommend-add-ons-staff-pick-part-2\":{\"branch\":\"treatment-b\",\""
		"extra\":{\"type\":\"nimbus-nimbus\"}},\"pin-email-and-calendar-tabs-early-day-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"home-and-newtab-wallpapers-v1-rollout-global\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"app_display_version\":\"128.0.3\",\"locale\":\"en-US\",\"app_build\":\"20240725162350\",\"os\":\"Windows\",\"architecture\":\"x86_64\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\"client_id\":\""
		"eba24bb8-b1b7-4cf8-820b-b08ed2ba5bb7\",\"first_run_date\":\"2024-07-31+00:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":20348},\"metrics\":{\"counter\":{\"use.counter.css.page.css_width\":2,\"use.counter.css.page.css_transition\":1,\"use.counter.css.page.css_font_weight\":2,\"use.counter.dedicated_workers_destroyed\":2,\"use.counter.css.page.css_margin_left\":2,\"use.counter.css.page.css_margin_right\":2,\"use.counter.css.page.css_transition_duration\":2,\""
		"use.counter.css.page.css_line_height\":2,\"use.counter.css.page.css_box_shadow\":2,\"use.counter.css.page.css_text_decoration\":2,\"use.counter.css.page.css_padding_bottom\":2,\"use.counter.css.page.css_margin_bottom\":2,\"use.counter.css.page.css_padding_top\":2,\"use.counter.css.page.css_position\":2,\"use.counter.css.page.css_border_radius\":2,\"use.counter.css.page.css_list_style\":2,\"use.counter.css.page.css_border_bottom\":1,\"use.counter.css.page.css_left\":2,\""
		"use.counter.css.page.css_animation\":1,\"use.counter.css.page.css_z_index\":1,\"use.counter.css.page.css_cursor\":2,\"use.counter.css.page.css_color\":2,\"use.counter.css.page.css_border_right\":2,\"use.counter.css.page.css_font_family\":2,\"use.counter.css.page.css_font_size\":2,\"use.counter.css.page.css_background_color\":2,\"use.counter.css.page.css_height\":2,\"use.counter.css.page.css_margin\":2,\"use.counter.css.page.css_display\":2,\"use.counter.css.page.css_float\":2,\""
		"use.counter.css.page.css_padding\":2,\"use.counter.css.page.css_overflow\":2,\"use.counter.css.page.css_padding_right\":2,\"use.counter.css.page.css_clear\":2,\"use.counter.top_level_content_documents_destroyed\":2,\"use.counter.css.page.css_margin_top\":2,\"use.counter.css.page.css_text_align\":2,\"use.counter.css.page.css_padding_left\":2,\"use.counter.css.page.css_border\":2}}}", 
		LAST);

	web_custom_request("94b388ba-d060-4d6a-8adc-258d6de147f0", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/pageload/1/94b388ba-d060-4d6a-8adc-258d6de147f0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":6,\"start_time\":\"2024-07-31T11:20:41.000+00:00\",\"end_time\":\"2024-07-31T11:23:08.087+00:00\",\"reason\":\"startup\"},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"windows_build_number\":20348,\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-07-31+00:00\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"locale\":\"en-US\",\"app_build\":\"20240725162350\",\"app_display_version\":\""
		"128.0.3\"},\"events\":[{\"timestamp\":0,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"response_time\":\"997\",\"redirect_count\":\"1\",\"glean_timestamp\":\"1722424841038\",\"redirect_time\":\"723\",\"load_type\":\"NORMAL\",\"http_ver\":\"1\",\"load_time\":\"1361\",\"lcp_time\":\"1358\",\"using_webdriver\":\"false\"}},{\"timestamp\":83806,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"http_ver\":\"1\",\"dns_lookup_time\":\"7\",\"load_time\":\"68\",\"glean_timestamp\":\""
		"1722424924836\",\"response_time\":\"19\",\"load_type\":\"LINK\",\"using_webdriver\":\"false\"}}]}", 
		LAST);

	web_custom_request("f4c43d36-71b8-47c4-8474-6ba63a43f2c4", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/f4c43d36-71b8-47c4-8474-6ba63a43f2c4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":12,\"start_time\":\"2024-07-31T11:20:41.000+00:00\",\"end_time\":\"2024-07-31T11:23:08.172+00:00\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"locale\":\"en-US\",\"app_build\":\"20240725162350\",\"app_display_version\":\"128.0.3\",\"app_channel\":\"release\",\"windows_build_number\":20348,\"first_run_date\":\"2024-07-31+00:00\",\"build_date\":\"1970-01-01T00"
		":00:00+00:00\",\"client_id\":\"eba24bb8-b1b7-4cf8-820b-b08ed2ba5bb7\"},\"metrics\":{\"string\":{\"newtab.newtab_category\":\"enabled\",\"newtab.homepage_category\":\"enabled\",\"newtab.locale\":\"en-US\"},\"boolean\":{\"newtab.search.enabled\":true,\"topsites.enabled\":true,\"pocket.is_signed_in\":false,\"pocket.enabled\":true,\"newtab.weather_enabled\":true,\"pocket.sponsored_stories_enabled\":true,\"topsites.sponsored_enabled\":true},\"quantity\":{\"topsites.rows\":1},\"string_list\":{\""
		"newtab.blocked_sponsors\":[]}}}", 
		LAST);

	web_custom_request("5f33645b-6d3b-4544-a9d7-3b3d245f506d", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/5f33645b-6d3b-4544-a9d7-3b3d245f506d", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":12,\"start_time\":\"2024-07-31T11:20:41.000+00:00\",\"end_time\":\"2024-07-31T11:23:08.272+00:00\",\"reason\":\"active\",\"experiments\":{\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"recommend-add-ons-staff-pick-part-2\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"pin-email-and-calendar-tabs-early-day-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"upgrade-spotlight-rollout\":"
		"{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"home-and-newtab-wallpapers-v1-rollout-global\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"client_id\":\"eba24bb8-b1b7-4cf8-820b-b08ed2ba5bb7\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-07-31+00:00\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os\":\"Windows\",\""
		"os_version\":\"10.0\",\"app_build\":\"20240725162350\",\"app_channel\":\"release\",\"app_display_version\":\"128.0.3\",\"windows_build_number\":20348},\"metrics\":{\"counter\":{\"browser.engagement.uri_count\":2,\"browser.engagement.active_ticks\":7},\"uuid\":{\"legacy.telemetry.client_id\":\"822571c1-9c9d-4d99-8bbb-5171f4f2a291\"},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1,\"newtab\":1,\"pageload\":1,\"use-counters\":1}}}}", 
		LAST);

	lr_think_time(12);

	lr_start_transaction("TR02_ApplyDebitCard");

	web_url("debit_card_form.php", 
		"URL=http://localhost/banking/debit_card_form.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../favicon.ico", ENDITEM, 
		LAST);

	lr_end_transaction("TR02_ApplyDebitCard",LR_AUTO);

	lr_think_time(42);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(19);

	lr_start_transaction("TR03_FillingForm");

	web_submit_data("debit_card_form.php_2", 
		"Action=http://localhost/banking/debit_card_form.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/debit_card_form.php", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=holder_name", "Value=Kanak", ENDITEM, 
		"Name=dob", "Value=2024-07-31", ENDITEM, 
		"Name=pan", "Value=KJHFG5598J", ENDITEM, 
		"Name=mob", "Value=3456787645", ENDITEM, 
		"Name=acc_no", "Value=1011761011319", ENDITEM, 
		"Name=dbt_crd_submit", "Value=Submit Query", ENDITEM, 
		LAST);

	lr_end_transaction("TR03_FillingForm",LR_AUTO);

	lr_think_time(59);

	lr_start_transaction("TR05_ClickOk");

	lr_end_transaction("TR05_ClickOk",LR_AUTO);

	lr_start_transaction("TR06_HomePage");

	web_url("Home", 
		"URL=http://localhost/banking/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/debit_card_form.php", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("TR06_HomePage",LR_AUTO);

	lr_think_time(109);

	lr_start_transaction("TR07_InternetBanking");

	lr_end_transaction("TR07_InternetBanking",LR_AUTO);

	lr_start_transaction("TR08_Register");

	web_url("Register", 
		"URL=http://localhost/banking/ebanking_reg_form.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/index.php", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("TR08_Register",LR_AUTO);

	lr_think_time(258);

	lr_start_transaction("TR08_FillForm");

	web_submit_data("ebanking_reg_form.php", 
		"Action=http://localhost/banking/ebanking_reg_form.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/ebanking_reg_form.php", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=holder_name", "Value=Kartik Kansal", ENDITEM, 
		"Name=accnum", "Value=1011951011203", ENDITEM, 
		"Name=dbtcard", "Value=421396885487", ENDITEM, 
		"Name=dbtpin", "Value=6795", ENDITEM, 
		"Name=mobile", "Value=3456766443", ENDITEM, 
		"Name=pan_no", "Value=THFPL5523K", ENDITEM, 
		"Name=dob", "Value=2000-01-03", ENDITEM, 
		"Name=last_trans", "Value=56", ENDITEM, 
		"Name=password", "Value=Sangh56", ENDITEM, 
		"Name=cnfrm_password", "Value=Sangh56", ENDITEM, 
		"Name=submit", "Value=Submit", ENDITEM, 
		LAST);

	return 0;
}