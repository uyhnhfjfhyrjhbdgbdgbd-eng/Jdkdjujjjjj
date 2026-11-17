      - name: Compilar Android ARM64
        id: build
        uses: geode-sdk/build-geode-mod@main
        with:
          target: Android64
          sdk: given
          configure-args: -DGEODE_DISABLE_FMT_CONSTEVAL=ON
