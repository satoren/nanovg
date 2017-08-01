
static void test_BigSizeText(NVGcontext* vg, int width, int height)
{
	nvgBeginFrame(vg, width, height, 1);

	nvgCreateFont(vg, "sans", "../example/Roboto-Regular.ttf");

	nvgFillColor(vg, nvgRGBA(255, 255, 255, 255));
	nvgFontSize(vg, 200);
	nvgTextAlign(vg, NVG_ALIGN_LEFT | NVG_ALIGN_TOP);
	nvgText(vg, 0, 0, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", 0);

	nvgEndFrame(vg);
}
