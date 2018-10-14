
##############################
# Country definition for PHI #
##############################

province =
{ id         = 1737
  anti_air   = 2
  naval_base = { size = 8 current_size = 8 }
  air_base   = { size = 1 current_size = 1 }
}              # Manila
province =
{ id         = 1739
  anti_air   = 4
  air_base   = { size = 5 current_size = 5 }
  naval_base = { size = 2 current_size = 2 }
}              # Clark Field

#####################
# Country main data #
#####################

country =
{ tag                    = PHI
  control                = USA
  puppet                 = USA
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 200
  oil                    = 200
  supplies               = 500
  money                  = 10
  consumer = 0.0000 
  supply = 0.0000 
  production = 1.0000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 0.3 # 0 + 0.4 from Philippine Constabulary - "building queue"
  transports             = 50
  capital                = 1737
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 4
    free_market       = 5
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 1
  }
  nationalprovinces      = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  ownedprovinces         = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  controlledprovinces    = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 5090 }
  blueprints             = { 5050 5060 6010 6020 2300 }
  diplomacy =
  { relation = { tag = AST value = 40 }
    # relation = { tag = CHI value = 5 }
    relation = { tag = JAP value = 1 }
    relation = { tag = LIB value = 200 }
    relation = { tag = NZL value = 25 }
    relation = { tag = USA value = 200 }
  }
  headofstate            = { type = 9 id = 50001 }
  headofgovernment       = { type = 9 id = 50002 }
  foreignminister        = { type = 9 id = 50003 }
  armamentminister       = { type = 9 id = 50004 }
  ministerofsecurity     = { type = 9 id = 50005 }
  ministerofintelligence = { type = 9 id = 50006 }
  chiefofstaff           = { type = 9 id = 50007 }
  chiefofarmy            = { type = 9 id = 50008 }
  chiefofnavy            = { type = 9 id = 50009 }
  chiefofair             = { type = 9 id = 50010 }
  landunit =
  { id       = { type = 11804 id = 1 }
    location = 1737
    name     = "Manila Garrison"
    division =
    { id       = { type = 11804 id = 2 }
      strength = 25 # was 30 before 1.11
      name     = "Philippine Constabulary"
      type     = garrison
    }
  } 
	province_development = { 
		id = { type = 11804 id = 3 } 
		name = "" 
		progress = 0.0000 
		location = 1737 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = october 
			day = 3 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2424 
		days_for_first = 108 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11804 id = 4 } 
		name = "" 
		progress = 0.0000 
		location = 1737 
		cost = 5.0000 
		date = { 
			year = 1936 
			month = december 
			day = 12 
			hour = 0 
			} 
		manpower = 1.0000 
		halted = yes 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 1 
		done = 0 
		days = 342 
		days_for_first = 342 
		gearing_bonus = 0.0000 
		type = ic 
		}
}
