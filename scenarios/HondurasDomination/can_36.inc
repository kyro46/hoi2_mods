
##############################
# Country definition for CAN #
##############################

province =
{ id         = 541
  anti_air   = 3
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Vancouver
province =
{ id       = 569
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # Winnipeg
province =
{ id         = 579
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Halifax
province =
{ id         = 581
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 4 current_size = 4 }
}              # Saint John
province =
{ id       = 585
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Montréal
province =
{ id         = 586
  anti_air   = 4
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Québec City
province =
{ id       = 588
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}            # Ottawa
province = { id = 589 anti_air = 1 } # Toronto
province =
{ id       = 797
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # Calgary

#####################
# Country main data #
#####################

country =
{ tag                    = CAN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 33 # 35 - building queue
  consumer = 0.2834 
  supply = 0.0500 
  production = 0.6666 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 588
  transports             = 2
  escorts                = 3
  diplomacy =
  { relation = { tag = AST value = 200 } # was access = yes
    relation = { tag = BEL value = 150 }
    relation = { tag = BHU value = 200 }
    relation = { tag = ENG value = 200 } # was access = yes
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = HOL value = 80 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 } # was access = yes
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 } # was access = yes
    relation = { tag = USA value = 175 }
    relation = { tag = YEM value = 150 }
	relation = { tag = SWE value = 3 }
	relation = { tag = CZE value = 5 }
	relation = { tag = DEN value = 14 }
	relation = { tag = FIN value = 23 }
	relation = { tag = NOR value = 19 }
	relation = { tag = LUX value = 5 }
	relation = { tag = POR value = 3 }
	relation = { tag = SCH value = 4 }
	relation = { tag = MEX value = 4 }
	
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "USA" NumberOfSpies = 5 }
  nationalprovinces      = { 556  541  555  554  552  558  557  796  797  799  798  795  794  559  560  561  563  566  567  570  568  569  571  565 
                             572  588  589  590  591  587  585  584  573  586  574  564  581  580  579  578  1909
                           }
  ownedprovinces         = { 556  541  555  554  552  558  557  796  797  799  798  795  794  559  560  561  563  566  567  570  568  569  571  565 
                             572  588  589  590  591  587  585  584  573  586  574  564  581  580  579  578  1909
                           }
  controlledprovinces    = { 556  541  555  554  552  558  557  796  797  799  798  795  794  559  560  561  563  566  567  570  568  569  571  565 
                             572  588  589  590  591  587  585  584  573  586  574  564  581  580  579  578  1909
                           }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 1010  1020  1190  1200  1210  1220  14000 2010  2150  2290  2300  2310  2450  2460  2510  3010  3020  3070  4010  4020 
                             4120  4130  5010  5020  5080  5090  5190  5310  6010  6030  6110  6120  8010  8020  8030  8040  8050  8070  8100  8120 
                             9010  9020  9030  9140 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    free_market       = 10
    freedom           = 10
    professional_army = 6
    defense_lobby     = 2
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 45001 }
  headofgovernment       = { type = 9 id = 45002 }
  foreignminister        = { type = 9 id = 45003 }
  armamentminister       = { type = 9 id = 45004 }
  ministerofsecurity     = { type = 9 id = 45005 }
  ministerofintelligence = { type = 9 id = 45006 }
  chiefofstaff           = { type = 9 id = 45007 }
  chiefofarmy            = { type = 9 id = 45008 }
  chiefofnavy            = { type = 9 id = 45009 }
  chiefofair             = { type = 9 id = 45010 }
  landunit =
  { id       = { type = 20000 id = 1 }
    name     = "Royal Canadian Army"
    location = 588
    division =
    { id       = { type = 20000 id = 2 }
      name     = "1st Canadian Infantry Div."
      strength = 1
      type     = infantry
      model    = 0
    }
  }
  navalunit =
  { id       = { type = 20000 id = 3 }
    location = 579
    base     = 579
    name     = "Canadian Transport Fleet"
    division =
    { id   = { type = 20000 id = 4 }
      name = "'Empress of Japan' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 20000 id = 5 }
      name = "'Empress of Australia' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 20000 id = 6 }
      name = "'Empress of Britain' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 20000 id = 9 }
      name = "'Empress of Canada' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 20000 id = 10 }
      name = "'Empress of Russia' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 20000 id = 11 }
      name = "'Empress of Asia' Flotilla"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 20000 id = 7 }
    name     = "Royal Canadian Navy"
    location = 579
    base     = 579
    division =
    { id       = { type = 20000 id = 8 }
      name     = "Destroyer Flotilla 1"
      strength = 100
      type     = destroyer
      model    = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
  } 
	convoy = { 
		id = { type = 20000 id = 22 } 
		trade_id = { type = 16384 id = 313 } 
		istradeconvoy = yes 
		transports = 32 
		escorts = 0 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = yes 
		supplies = no 
		path = { 541 1922 1920 1935 1940 2566 1962 2574 2575 2576 2524 2539 2540 2314 2312 2353 2354 2361 2371 2421 2599 2400 2399 2472 2395 46 } 
		} 
	province_development = { 
		id = { type = 20000 id = 23 } 
		name = "" 
		progress = 0.0000 
		location = 588 
		cost = 5.0000 
		date = { 
			year = 1940 
			month = january 
			day = 0 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 5 
		done = 0 
		days = 1440 
		days_for_first = 288 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 20000 id = 12 } 
		name = "" 
		progress = 0.0000 
		location = 588 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1899 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20000 id = 13 } 
		name = "" 
		progress = 0.0000 
		location = 586 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1899 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20000 id = 14 } 
		name = "" 
		progress = 0.0000 
		location = 584 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = february 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2208 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20000 id = 15 } 
		name = "" 
		progress = 0.0000 
		location = 589 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1899 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20000 id = 16 } 
		name = "" 
		progress = 0.0000 
		location = 590 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1899 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20000 id = 17 } 
		name = "" 
		progress = 0.0000 
		location = 591 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1899 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20000 id = 18 } 
		name = "" 
		progress = 0.0000 
		location = 556 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = august 
			day = 3 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1899 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20000 id = 19 } 
		name = "" 
		progress = 0.0000 
		location = 796 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = february 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2208 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20000 id = 20 } 
		name = "" 
		progress = 0.0000 
		location = 579 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = february 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2208 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20000 id = 21 } 
		name = "" 
		progress = 0.0000 
		location = 572 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = august 
			day = 3 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1899 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
