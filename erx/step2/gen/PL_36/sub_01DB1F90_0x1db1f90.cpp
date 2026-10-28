#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01DB1F90
// Address: 0x1db1f90 - 0x1db2078
void sub_01DB1F90_0x1db1f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1F90_0x1db1f90");
#endif

    switch (ctx->pc) {
        case 0x1db1fc0u: goto label_1db1fc0;
        case 0x1db1ff0u: goto label_1db1ff0;
        case 0x1db2000u: goto label_1db2000;
        case 0x1db2010u: goto label_1db2010;
        default: break;
    }

    ctx->pc = 0x1db1f90u;

    // 0x1db1f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1db1f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1db1f94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db1f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db1f98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1db1f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1db1f9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db1f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db1fa0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1db1fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1fa4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1db1fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1db1fa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1db1fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1db1fac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1db1facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1fb0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1db1fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1db1fb4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1db1fb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1db1fb8: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB1FB8u;
    SET_GPR_U32(ctx, 31, 0x1DB1FC0u);
    ctx->pc = 0x1DB1FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1FB8u;
    // 0x1db1fbc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB1FB8u, 0x1DB1FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1FC0u;
label_1db1fc0:
    // 0x1db1fc0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1db1fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1db1fc4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1db1fc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1db1fc8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1db1fc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1db1fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db1fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1fd0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1db1fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1db1fd4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1db1fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1db1fd8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1db1fd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1db1fdc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1db1fdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1db1fe0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1db1fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1db1fe4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1db1fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1db1fe8: 0xc76c3c6  jal         func_1DB0F18
    ctx->pc = 0x1DB1FE8u;
    SET_GPR_U32(ctx, 31, 0x1DB1FF0u);
    ctx->pc = 0x1DB1FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1FE8u;
    // 0x1db1fec: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F18u, 0x1DB1FE8u, 0x1DB1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1FF0u;
label_1db1ff0:
    // 0x1db1ff0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1db1ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1db1ff4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1db1ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1ff8: 0xc76c3c6  jal         func_1DB0F18
    ctx->pc = 0x1DB1FF8u;
    SET_GPR_U32(ctx, 31, 0x1DB2000u);
    ctx->pc = 0x1DB1FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1FF8u;
    // 0x1db1ffc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F18u, 0x1DB1FF8u, 0x1DB2000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2000u;
label_1db2000:
    // 0x1db2000: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1db2000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1db2004: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1db2004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2008: 0xc76c3c8  jal         func_1DB0F20
    ctx->pc = 0x1DB2008u;
    SET_GPR_U32(ctx, 31, 0x1DB2010u);
    ctx->pc = 0x1DB200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2008u;
    // 0x1db200c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F20u, 0x1DB2008u, 0x1DB2010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2010u;
label_1db2010:
    // 0x1db2010: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1db2010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db2014: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1db2014u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1db2018: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1db2018u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1db201c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1db201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1db2020: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1db2020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1db2024: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1db2024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1db2028: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1db2028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1db202c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1db202cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1db2030: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1db2030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db2034: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1db2034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db2038: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1db2038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1db203c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1db203cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1db2040: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1db2040u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1db2044: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1db2044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db2048: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1db2048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1db204c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1db204cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1db2050: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1db2050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1db2054: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1db2054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db2058: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1db2058u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db205c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1db205cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1db2060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db2060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db2064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db2064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2068: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1db2068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db206c: 0x876c3c6  j           func_1DB0F18
    ctx->pc = 0x1DB206Cu;
    ctx->pc = 0x1DB2070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB206Cu;
    // 0x1db2070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F18u;
    sub_01DB0F18_0x1db0f18(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB2074u;
    // 0x1db2074: 0x0  nop
    ctx->pc = 0x1db2074u;
    // NOP
    ctx->pc = 0x1db2078u;
}
