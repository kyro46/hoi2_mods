
##############################
# Country definition for AST #
##############################

province =
{ id         = 1670
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 2 current_size = 2 }
  anti_air   = 2
}              # Rabaul
province =
{ id       = 1672
  air_base = { size = 1 current_size = 1 }
  anti_air = 1
}            # Lae
province =
{ id         = 1679
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 2 current_size = 2 }
  anti_air   = 1
  oilpool    = 1
  supplypool = 50
}              # Port Moresby
province =
{ id         = 1703
  anti_air   = 5
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
  ic         = 1
}              # Darwin
province =
{ id          = 1712
  anti_air    = 5
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 10 current_size = 10 }
  coastalfort = 1
}               # Perth
province = { id = 1718 anti_air = 1 } # Port Augusta
province =
{ id          = 1722
  anti_air    = 4
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 10 current_size = 10 }
  coastalfort = 1
  ic          = 3
}               # Brisbane
province = { id = 1724 ic = 1 } # Newcastle
province = { id = 1724 anti_air = 3 } # Wentworth
province =
{ id          = 1727
  anti_air    = 4
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 10 current_size = 10 }
  coastalfort = 2
  ic          = 2
}               # Sydney
province = { id = 1728 anti_air = 2 } # Canberra
province = { id = 1729 supplypool = 50 } # Tasmania
province = { id = 1730  coastalfort = 1 anti_air = 3 ic = 2 } # Melbourne
province = { id = 1733 anti_air = 2 ic = 2 } # Adelaide

#####################
# Country main data #
#####################

country =
{ tag                    = AST
  manpower               = 21.9 # 25 - building queue
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 450
  money                  = 20
  consumer = 0.2655 
  supply = 0.0845 
  production = 0.6500 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1728
  # 1st Transport Flotilla#
  transports             = 34
  escorts                = 5
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 1
    free_market       = 8
    freedom           = 10
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 6
  }
  nationalprovinces      = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
                             1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734
                           }
  ownedprovinces         = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
                             1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734 1668 1669 1670 1671 1681 1682
                             1666 1667 1672 1675 1676 1677 1678 1679 1680
                           }
  controlledprovinces    = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
                             1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734 1668 1669 1670 1671 1681 1682
                             1666 1667 1672 1675 1676 1677 1678 1679 1680
                           }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 1010  1020  1190  1200  1210  1220  14000 2010  2150  2290  2300  2310  2450  2460  2510  3010  3020  3070  3080  3090 
                             3130  3140  3190  4010  4020  4120  4130  5010  5020  5080  5090  5190  5310  5320  6010  6030  6110  6120  8010  8020 
                             8030  8040  8050  8070  8100  8120  9010  9020  9030  9140  1310
                           }
  diplomacy =
  { relation = { tag = BEL value = 75 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 } # was access = yes
    relation = { tag = ENG value = 200 } # was access = yes
    relation = { tag = FIN value = 65 }
    relation = { tag = SWE value = 4 }
	relation = { tag = NOR value = 6 }
	relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 } # was access = yes
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 40 }
    relation = { tag = SAF value = 200 } # was access = yes
    relation = { tag = SAU value = 50 }
    relation = { tag = USA value = 125 }
    relation = { tag = MEX value = 4 }
	relation = { tag = YEM value = 150 }
  
 }
  headofstate            = { type = 9 id = 56001 }
  headofgovernment       = { type = 9 id = 56002 }
  foreignminister        = { type = 9 id = 56003 }
  armamentminister       = { type = 9 id = 56004 }
  ministerofsecurity     = { type = 9 id = 56005 }
  ministerofintelligence = { type = 9 id = 56006 }
  chiefofstaff           = { type = 9 id = 56007 }
  chiefofarmy            = { type = 9 id = 56008 }
  chiefofnavy            = { type = 9 id = 56009 }
  chiefofair             = { type = 9 id = 56010 }
  # ##	1932:  The total Militia was only 28,000 men strong
  # ##	Regular Army had about 1500 men (mostly coastal artillery)
  # ##	This was brought upto 46,000 by 1938
  # ##	The Militia was used in New Guinea against Japan
  # ######### Australian Army ##############
  landunit =
  { id       = { type = 10500 id = 1 }
    name     = "1st Military District"
    location = 1693
    division =
    { id       = { type = 10500 id = 2 }
      name     = "1st Military District"
      strength = 100
      type     = garrison
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 10500 id = 3 }
    name     = "6th Military District"
    location = 1729
    division =
    { id       = { type = 10500 id = 4 }
      name     = "6th Military District"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10500 id = 5 }
    name     = "2nd Military District"
    location = 1727
    division =
    { id       = { type = 10500 id = 6 }
      name     = "1st Infantry Division"
      strength = 30
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 10500 id = 7 }
      name     = "2nd Infantry Division"
      strength = 30
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 10500 id = 8 }
      name     = "1st Cavalry Division"
      strength = 100
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10500 id = 9 }
    name     = "4th Military District"
    location = 1733
    division =
    { id       = { type = 10500 id = 10 }
      name     = "4th Military District"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10500 id = 11 }
    name     = "5th Military District"
    location = 1712
    division =
    { id       = { type = 10500 id = 12 }
      name     = "5th Military District"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10500 id = 13 }
    name     = "7th Military District"
    location = 1703
    division =
    { id       = { type = 10500 id = 14 }
      name     = "Darwin Garrison"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10500 id = 15 }
    name     = "Port Moresby Garrison"
    location = 1679
    division =
    { id       = { type = 10500 id = 16 }
      name     = "Port Moresby Garrison"
      strength = 100
      type     = garrison
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 10500 id = 17 }
    name     = "2nd Military District"
    location = 1730
    division =
    { id       = { type = 10500 id = 18 }
      name     = "3rd Infantry Division"
      strength = 30
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 10500 id = 19 }
      name     = "2nd Cavalry Division"
      strength = 100
      type     = cavalry
      model    = 2
    }
  }
  # ######### Australian Navy ##############
  navalunit =
  { id       = { type = 10500 id = 20 }
    name     = "HM Australian Fleet"
    location = 1727 # Sydney
    base     = 1727
    division =
    { id    = { type = 10500 id = 21 }
      name  = "HMAS Australia"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division =
    { id    = { type = 10500 id = 22 }
      name  = "HMAS Canberra"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division =
    { id    = { type = 10500 id = 23 }
      name  = "HMAS Sydney"
      type  = light_cruiser
      model = 2
      extra1 = naval_spotter_s
      extra2 = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 10500 id = 24 }
      name  = "1st Destroyer Flotilla"
      type  = destroyer
      model = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  # 1st Transport Flotilla#
  navalunit =
  { id       = { type = 10500 id = 25 }
    name     = "Transport Flotilla"
    location = 1727 # Sydney
    base     = 1727
    division =
    { id   = { type = 10500 id = 26 }
      name = "HMAS Kanimbla Flotilla"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 10500 id = 27 }
    name     = "HM Australian Reserve Fleet"
    location = 1727 # Sydney
    base     = 1727
    division =
    { id    = { type = 10500 id = 28 }
      name  = "HMAS Adelaide"
      type  = light_cruiser
      model = 0
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 29 }
    name     = "Australian Transport Fleet"
    location = 1727 # Sydney
    base     = 1727
    division =
    { id   = { type = 10500 id = 30 }
      name = "1st Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 31 }
      name = "2nd Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 32 }
      name = "3rd Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 33 }
      name = "4th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 34 }
      name = "5th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 35 }
      name = "6th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 36 }
      name = "7th Transport Flotilla"
      type = transport
    }
  }
  # ################## Australian Air Force #######################
  # ## An approximation of the 13 squadron airforce in 1936.###
  airunit =
  { location = 1727
    base     = 1727
    id       = { type = 10500 id = 37 }
    name     = "No.1 RAAF Tactical Bomber Group"
    division =
    { id       = { type = 10500 id = 38 }
      name     = "No.1 RAAF Tactical Bomber Group"
      strength = 100
      type     = tactical_bomber
      model    = 1
    }
  }
  # Note on Warships Under Construction or Refit#
  # HMAS Adelaide was refitted by 1939.
  # Adelaide had a max speed of only 24 knots.
  convoy = { 
		id = { type = 10500 id = 48 } 
		trade_id = { type = 16384 id = 314 } 
		istradeconvoy = yes 
		transports = 31 
		escorts = 0 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = yes 
		supplies = no 
		path = { 1712 2087 2083 2084 2067 2066 2014 2009 2007 2272 2582 2287 2288 2580 2295 2594 2300 2593 2424 2595 2420 2596 2414 2413 2412 2395 46 } 
		} 
	province_development = { 
		id = { type = 10500 id = 40 } 
		name = "" 
		progress = 0.0000 
		location = 1727 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = october 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1969 
		days_for_first = 150 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 41 } 
		name = "" 
		progress = 0.0000 
		location = 1728 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = october 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1969 
		days_for_first = 150 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 42 } 
		name = "" 
		progress = 0.0000 
		location = 1730 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = june 
			day = 12 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1969 
		days_for_first = 100 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 43 } 
		name = "" 
		progress = 0.0000 
		location = 1722 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = march 
			day = 3 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1969 
		days_for_first = 150 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 44 } 
		name = "" 
		progress = 0.0000 
		location = 1733 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = may 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2288 
		days_for_first = 100 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 45 } 
		name = "" 
		progress = 0.0000 
		location = 1734 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = march 
			day = 19 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2608 
		days_for_first = 100 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 46 } 
		name = "" 
		progress = 0.0000 
		location = 1724 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = november 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 14 
		done = 0 
		days = 1969 
		days_for_first = 150 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 47 } 
		name = "" 
		progress = 0.0000 
		location = 1729 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = march 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 12 
		done = 0 
		days = 2288 
		days_for_first = 150 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 49 } 
		name = "" 
		progress = 0.0000 
		location = 1721 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = september 
			day = 5 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 16 
		done = 0 
		days = 2608 
		days_for_first = 100 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
#	province_development = { 
#		id = { type = 10500 id = 50 } 
#		name = "" 
#		progress = 0.0000 
#		location = 1712 
#		cost = 2.0000 
#		date = { 
#			year = 1939 
#			month = june 
#			day = 29 
#			hour = 0 
#			} 
#		manpower = 0.1000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 12 
#		done = 0 
#		days = 2288 
#		days_for_first = 125 
#		gearing_bonus = 0.0000 
#		type = infrastructure 
#		} 
#	province_development = { 
#		id = { type = 10500 id = 51 } 
#		name = "" 
#		progress = 0.0000 
#		location = 1703 
#		cost = 2.0000 
#		date = { 
#			year = 1939 
#			month = june 
#			day = 29 
#			hour = 0 
#			} 
#		manpower = 0.1000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 12 
#		done = 0 
#		days = 2288 
#		days_for_first = 125 
#		gearing_bonus = 0.0000 
#		type = infrastructure 
#		} 
	division_development = { 
		id = { type = 10500 id = 39 } 
		name = "HMAS Perth" 
		progress = 0.0000 
		location = 0 
		cost = 3.1680 
		date = { 
			year = 1936 
			month = january 
			day = 12 
			hour = 0 
			} 
		manpower = 1.2000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.9277 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 166 
		gearing_bonus = 0.0000 
		type = light_cruiser 
		extra = none 
		extra1 = none 
		extra2 = none 
		extra3 = none 
		extra4 = none 
		model = 2 
		brigade_model = 0 
		brigade_model1 = 0 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	convoy_development = { 
		id = { type = 10500 id = 52 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1941 
			month = may 
			day = 7 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 30 
		done = 0 
		days = 1 
		days_for_first = 79 
		gearing_bonus = 0.0000 
		type = transports 
		}
}
