
#include "uloc.h"
#include "gscripttable.h"

#define G_N_ELEMENTS(arr)		(sizeof (arr) / sizeof ((arr)[0]))
#define G_SCRIPT_TABLE_MIDPOINT (G_N_ELEMENTS (g_script_table) / 2)

static inline GUnicodeScript
g_unichar_get_script_bsearch (gunichar ch)
{
  int lower = 0;
  int upper = G_N_ELEMENTS (g_script_table) - 1;
  static int saved_mid = G_SCRIPT_TABLE_MIDPOINT;
  int mid = saved_mid;


  do 
    {
      if (ch < g_script_table[mid].start)
	upper = mid - 1;
      else if (ch >= g_script_table[mid].start + g_script_table[mid].chars)
	lower = mid + 1;
      else
	return g_script_table[saved_mid = mid].script;

      mid = (lower + upper) / 2;
    }
  while (lower <= upper);

  return G_UNICODE_SCRIPT_UNKNOWN;
}

GUnicodeScript
g_unichar_get_script (gunichar ch)
{
  if (ch < G_EASY_SCRIPTS_RANGE)
    return g_script_easy_table[ch];
  else 
    return g_unichar_get_script_bsearch (ch); 
}
