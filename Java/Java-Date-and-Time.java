class Result {

    /*
     * Complete the 'findDay' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     *  1. INTEGER month
     *  2. INTEGER day
     *  3. INTEGER year
     */

    public static String findDay(int month, int day, int year) {
        String[] weekDays = {"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
        Calendar C = Calendar.getInstance();
        C.set(year,month-1,day);
        int d = C.get(Calendar.DAY_OF_WEEK);
        return weekDays[d-1];
    }

}